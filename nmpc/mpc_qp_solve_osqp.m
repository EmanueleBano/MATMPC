function [cpt_qp, mem] = mpc_qp_solve_osqp(sizes,mem)
    
    N=sizes.N;  
    nbx=sizes.nbx;
    nx=sizes.nx;
    nu=sizes.nu;
    nc=sizes.nc;
    ncN=sizes.ncN;
    neq = (N+1)*nx;
    nw = (N+1)*nx+N*nu;
    nineq = N*nc+ncN;
    
    
%     if mem.iter==1 && mem.sqp_it== 0 
%         A = [mem.osqp_dG_pattern; mem.sparse_dBu; mem.sparse_dBx; mem.osqp_dB_pattern];
%         l = -inf(neq+nineq+N*nbx+N*nu,1);
%         u = inf(neq+nineq+N*nbx+N*nu,1);
%         mem.qp_obj.setup(mem.osqp_H_pattern, [], A, l, u, mem.osqp_options);
% % %         sol = mem.qp_obj.solve();
% % 
%         full2sparse(mem,sizes);  
%         A = [mem.sparse_dG; mem.sparse_dBu; mem.sparse_dBx; mem.sparse_dB];
%         l = [-mem.sparse_G; mem.sparse_lb];
%         u = [-mem.sparse_G; mem.sparse_ub];
%         mem.qp_obj.update('Px', mem.sparse_H, 'Ax', A);
%         mem.qp_obj.update('q', mem.sparse_g, 'l', l, 'u', u);
% %         
% %         sol = mem.qp_obj.solve();
%         
% %         mem.qp_obj.setup(mem.sparse_H, mem.sparse_g, A, l, u, mem.osqp_options);
%         sol = mem.qp_obj.solve();
%     else
%         full2sparse(mem,sizes);    
%         A = [mem.sparse_dG; mem.sparse_dBu; mem.sparse_dBx; mem.sparse_dB];
%         l = [-mem.sparse_G; mem.sparse_lb];
%         u = [-mem.sparse_G; mem.sparse_ub];
%                
%         mem.qp_obj.update('Px', mem.sparse_H, 'Ax', A);
%         mem.qp_obj.update('q', mem.sparse_g, 'l', l, 'u', u);
%         sol = mem.qp_obj.solve();
%     end

    full2sparse(mem,sizes);    
    A = [mem.sparse_dG; mem.sparse_dBu; mem.sparse_dBx; mem.sparse_dB];
    l = [-mem.sparse_G; mem.sparse_lb];
    u = [-mem.sparse_G; mem.sparse_ub];
        
    qp_obj = osqp;
    qp_obj.setup(mem.sparse_H, mem.sparse_g, A, l, u, mem.osqp_options);
    sol = qp_obj.solve();       

    mem.dx(:) = reshape(sol.x(1:neq,1),[nx,N+1]);
    mem.du(:) = reshape(sol.x(neq+1:nw,1),[nu,N]);
        
    mem.lambda_new(:) = reshape(sol.y(1:neq,1),[nx,N+1]);
    mem.mu_u_new(:) = sol.y(neq+1:neq+N*nu,1);
    mem.mu_x_new(:) = sol.y(neq+N*nu+1:neq+N*nu+N*nbx,1);
    mem.mu_new(:) = sol.y(neq+N*nu+N*nbx+1:end,1);
    
    cpt_qp   = sol.info.run_time*1e3;
               
end
