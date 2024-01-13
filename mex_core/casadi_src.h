/* This file was automatically generated by CasADi 3.6.3.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

int f_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int f_fun_alloc_mem(void);
int f_fun_init_mem(int mem);
void f_fun_free_mem(int mem);
int f_fun_checkout(void);
void f_fun_release(int mem);
void f_fun_incref(void);
void f_fun_decref(void);
casadi_int f_fun_n_in(void);
casadi_int f_fun_n_out(void);
casadi_real f_fun_default_in(casadi_int i);
const char* f_fun_name_in(casadi_int i);
const char* f_fun_name_out(casadi_int i);
const casadi_int* f_fun_sparsity_in(casadi_int i);
const casadi_int* f_fun_sparsity_out(casadi_int i);
int f_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define f_fun_SZ_ARG 4
#define f_fun_SZ_RES 1
#define f_fun_SZ_IW 0
#define f_fun_SZ_W 8
int g_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int g_fun_alloc_mem(void);
int g_fun_init_mem(int mem);
void g_fun_free_mem(int mem);
int g_fun_checkout(void);
void g_fun_release(int mem);
void g_fun_incref(void);
void g_fun_decref(void);
casadi_int g_fun_n_in(void);
casadi_int g_fun_n_out(void);
casadi_real g_fun_default_in(casadi_int i);
const char* g_fun_name_in(casadi_int i);
const char* g_fun_name_out(casadi_int i);
const casadi_int* g_fun_sparsity_in(casadi_int i);
const casadi_int* g_fun_sparsity_out(casadi_int i);
int g_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define g_fun_SZ_ARG 5
#define g_fun_SZ_RES 1
#define g_fun_SZ_IW 0
#define g_fun_SZ_W 1
int vdeFun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int vdeFun_alloc_mem(void);
int vdeFun_init_mem(int mem);
void vdeFun_free_mem(int mem);
int vdeFun_checkout(void);
void vdeFun_release(int mem);
void vdeFun_incref(void);
void vdeFun_decref(void);
casadi_int vdeFun_n_in(void);
casadi_int vdeFun_n_out(void);
casadi_real vdeFun_default_in(casadi_int i);
const char* vdeFun_name_in(casadi_int i);
const char* vdeFun_name_out(casadi_int i);
const casadi_int* vdeFun_sparsity_in(casadi_int i);
const casadi_int* vdeFun_sparsity_out(casadi_int i);
int vdeFun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define vdeFun_SZ_ARG 6
#define vdeFun_SZ_RES 2
#define vdeFun_SZ_IW 0
#define vdeFun_SZ_W 40
int adj_ERK_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int adj_ERK_fun_alloc_mem(void);
int adj_ERK_fun_init_mem(int mem);
void adj_ERK_fun_free_mem(int mem);
int adj_ERK_fun_checkout(void);
void adj_ERK_fun_release(int mem);
void adj_ERK_fun_incref(void);
void adj_ERK_fun_decref(void);
casadi_int adj_ERK_fun_n_in(void);
casadi_int adj_ERK_fun_n_out(void);
casadi_real adj_ERK_fun_default_in(casadi_int i);
const char* adj_ERK_fun_name_in(casadi_int i);
const char* adj_ERK_fun_name_out(casadi_int i);
const casadi_int* adj_ERK_fun_sparsity_in(casadi_int i);
const casadi_int* adj_ERK_fun_sparsity_out(casadi_int i);
int adj_ERK_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define adj_ERK_fun_SZ_ARG 5
#define adj_ERK_fun_SZ_RES 1
#define adj_ERK_fun_SZ_IW 0
#define adj_ERK_fun_SZ_W 20
int adj_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int adj_fun_alloc_mem(void);
int adj_fun_init_mem(int mem);
void adj_fun_free_mem(int mem);
int adj_fun_checkout(void);
void adj_fun_release(int mem);
void adj_fun_incref(void);
void adj_fun_decref(void);
casadi_int adj_fun_n_in(void);
casadi_int adj_fun_n_out(void);
casadi_real adj_fun_default_in(casadi_int i);
const char* adj_fun_name_in(casadi_int i);
const char* adj_fun_name_out(casadi_int i);
const casadi_int* adj_fun_sparsity_in(casadi_int i);
const casadi_int* adj_fun_sparsity_out(casadi_int i);
int adj_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define adj_fun_SZ_ARG 9
#define adj_fun_SZ_RES 2
#define adj_fun_SZ_IW 0
#define adj_fun_SZ_W 6
int adjN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int adjN_fun_alloc_mem(void);
int adjN_fun_init_mem(int mem);
void adjN_fun_free_mem(int mem);
int adjN_fun_checkout(void);
void adjN_fun_release(int mem);
void adjN_fun_incref(void);
void adjN_fun_decref(void);
casadi_int adjN_fun_n_in(void);
casadi_int adjN_fun_n_out(void);
casadi_real adjN_fun_default_in(casadi_int i);
const char* adjN_fun_name_in(casadi_int i);
const char* adjN_fun_name_out(casadi_int i);
const casadi_int* adjN_fun_sparsity_in(casadi_int i);
const casadi_int* adjN_fun_sparsity_out(casadi_int i);
int adjN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define adjN_fun_SZ_ARG 6
#define adjN_fun_SZ_RES 2
#define adjN_fun_SZ_IW 0
#define adjN_fun_SZ_W 5
int impl_f_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_f_fun_alloc_mem(void);
int impl_f_fun_init_mem(int mem);
void impl_f_fun_free_mem(int mem);
int impl_f_fun_checkout(void);
void impl_f_fun_release(int mem);
void impl_f_fun_incref(void);
void impl_f_fun_decref(void);
casadi_int impl_f_fun_n_in(void);
casadi_int impl_f_fun_n_out(void);
casadi_real impl_f_fun_default_in(casadi_int i);
const char* impl_f_fun_name_in(casadi_int i);
const char* impl_f_fun_name_out(casadi_int i);
const casadi_int* impl_f_fun_sparsity_in(casadi_int i);
const casadi_int* impl_f_fun_sparsity_out(casadi_int i);
int impl_f_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_f_fun_SZ_ARG 5
#define impl_f_fun_SZ_RES 1
#define impl_f_fun_SZ_IW 0
#define impl_f_fun_SZ_W 9
int impl_jac_f_x_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_f_x_fun_alloc_mem(void);
int impl_jac_f_x_fun_init_mem(int mem);
void impl_jac_f_x_fun_free_mem(int mem);
int impl_jac_f_x_fun_checkout(void);
void impl_jac_f_x_fun_release(int mem);
void impl_jac_f_x_fun_incref(void);
void impl_jac_f_x_fun_decref(void);
casadi_int impl_jac_f_x_fun_n_in(void);
casadi_int impl_jac_f_x_fun_n_out(void);
casadi_real impl_jac_f_x_fun_default_in(casadi_int i);
const char* impl_jac_f_x_fun_name_in(casadi_int i);
const char* impl_jac_f_x_fun_name_out(casadi_int i);
const casadi_int* impl_jac_f_x_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_f_x_fun_sparsity_out(casadi_int i);
int impl_jac_f_x_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_f_x_fun_SZ_ARG 5
#define impl_jac_f_x_fun_SZ_RES 1
#define impl_jac_f_x_fun_SZ_IW 0
#define impl_jac_f_x_fun_SZ_W 14
int impl_jac_f_u_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_f_u_fun_alloc_mem(void);
int impl_jac_f_u_fun_init_mem(int mem);
void impl_jac_f_u_fun_free_mem(int mem);
int impl_jac_f_u_fun_checkout(void);
void impl_jac_f_u_fun_release(int mem);
void impl_jac_f_u_fun_incref(void);
void impl_jac_f_u_fun_decref(void);
casadi_int impl_jac_f_u_fun_n_in(void);
casadi_int impl_jac_f_u_fun_n_out(void);
casadi_real impl_jac_f_u_fun_default_in(casadi_int i);
const char* impl_jac_f_u_fun_name_in(casadi_int i);
const char* impl_jac_f_u_fun_name_out(casadi_int i);
const casadi_int* impl_jac_f_u_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_f_u_fun_sparsity_out(casadi_int i);
int impl_jac_f_u_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_f_u_fun_SZ_ARG 5
#define impl_jac_f_u_fun_SZ_RES 1
#define impl_jac_f_u_fun_SZ_IW 0
#define impl_jac_f_u_fun_SZ_W 4
int impl_jac_f_xdot_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_f_xdot_fun_alloc_mem(void);
int impl_jac_f_xdot_fun_init_mem(int mem);
void impl_jac_f_xdot_fun_free_mem(int mem);
int impl_jac_f_xdot_fun_checkout(void);
void impl_jac_f_xdot_fun_release(int mem);
void impl_jac_f_xdot_fun_incref(void);
void impl_jac_f_xdot_fun_decref(void);
casadi_int impl_jac_f_xdot_fun_n_in(void);
casadi_int impl_jac_f_xdot_fun_n_out(void);
casadi_real impl_jac_f_xdot_fun_default_in(casadi_int i);
const char* impl_jac_f_xdot_fun_name_in(casadi_int i);
const char* impl_jac_f_xdot_fun_name_out(casadi_int i);
const casadi_int* impl_jac_f_xdot_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_f_xdot_fun_sparsity_out(casadi_int i);
int impl_jac_f_xdot_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_f_xdot_fun_SZ_ARG 5
#define impl_jac_f_xdot_fun_SZ_RES 1
#define impl_jac_f_xdot_fun_SZ_IW 0
#define impl_jac_f_xdot_fun_SZ_W 2
int impl_jac_f_z_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_f_z_fun_alloc_mem(void);
int impl_jac_f_z_fun_init_mem(int mem);
void impl_jac_f_z_fun_free_mem(int mem);
int impl_jac_f_z_fun_checkout(void);
void impl_jac_f_z_fun_release(int mem);
void impl_jac_f_z_fun_incref(void);
void impl_jac_f_z_fun_decref(void);
casadi_int impl_jac_f_z_fun_n_in(void);
casadi_int impl_jac_f_z_fun_n_out(void);
casadi_real impl_jac_f_z_fun_default_in(casadi_int i);
const char* impl_jac_f_z_fun_name_in(casadi_int i);
const char* impl_jac_f_z_fun_name_out(casadi_int i);
const casadi_int* impl_jac_f_z_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_f_z_fun_sparsity_out(casadi_int i);
int impl_jac_f_z_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_f_z_fun_SZ_ARG 5
#define impl_jac_f_z_fun_SZ_RES 1
#define impl_jac_f_z_fun_SZ_IW 0
#define impl_jac_f_z_fun_SZ_W 1
int impl_jac_g_x_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_g_x_fun_alloc_mem(void);
int impl_jac_g_x_fun_init_mem(int mem);
void impl_jac_g_x_fun_free_mem(int mem);
int impl_jac_g_x_fun_checkout(void);
void impl_jac_g_x_fun_release(int mem);
void impl_jac_g_x_fun_incref(void);
void impl_jac_g_x_fun_decref(void);
casadi_int impl_jac_g_x_fun_n_in(void);
casadi_int impl_jac_g_x_fun_n_out(void);
casadi_real impl_jac_g_x_fun_default_in(casadi_int i);
const char* impl_jac_g_x_fun_name_in(casadi_int i);
const char* impl_jac_g_x_fun_name_out(casadi_int i);
const casadi_int* impl_jac_g_x_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_g_x_fun_sparsity_out(casadi_int i);
int impl_jac_g_x_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_g_x_fun_SZ_ARG 5
#define impl_jac_g_x_fun_SZ_RES 1
#define impl_jac_g_x_fun_SZ_IW 0
#define impl_jac_g_x_fun_SZ_W 1
int impl_jac_g_u_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_g_u_fun_alloc_mem(void);
int impl_jac_g_u_fun_init_mem(int mem);
void impl_jac_g_u_fun_free_mem(int mem);
int impl_jac_g_u_fun_checkout(void);
void impl_jac_g_u_fun_release(int mem);
void impl_jac_g_u_fun_incref(void);
void impl_jac_g_u_fun_decref(void);
casadi_int impl_jac_g_u_fun_n_in(void);
casadi_int impl_jac_g_u_fun_n_out(void);
casadi_real impl_jac_g_u_fun_default_in(casadi_int i);
const char* impl_jac_g_u_fun_name_in(casadi_int i);
const char* impl_jac_g_u_fun_name_out(casadi_int i);
const casadi_int* impl_jac_g_u_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_g_u_fun_sparsity_out(casadi_int i);
int impl_jac_g_u_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_g_u_fun_SZ_ARG 5
#define impl_jac_g_u_fun_SZ_RES 1
#define impl_jac_g_u_fun_SZ_IW 0
#define impl_jac_g_u_fun_SZ_W 1
int impl_jac_g_z_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int impl_jac_g_z_fun_alloc_mem(void);
int impl_jac_g_z_fun_init_mem(int mem);
void impl_jac_g_z_fun_free_mem(int mem);
int impl_jac_g_z_fun_checkout(void);
void impl_jac_g_z_fun_release(int mem);
void impl_jac_g_z_fun_incref(void);
void impl_jac_g_z_fun_decref(void);
casadi_int impl_jac_g_z_fun_n_in(void);
casadi_int impl_jac_g_z_fun_n_out(void);
casadi_real impl_jac_g_z_fun_default_in(casadi_int i);
const char* impl_jac_g_z_fun_name_in(casadi_int i);
const char* impl_jac_g_z_fun_name_out(casadi_int i);
const casadi_int* impl_jac_g_z_fun_sparsity_in(casadi_int i);
const casadi_int* impl_jac_g_z_fun_sparsity_out(casadi_int i);
int impl_jac_g_z_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define impl_jac_g_z_fun_SZ_ARG 5
#define impl_jac_g_z_fun_SZ_RES 1
#define impl_jac_g_z_fun_SZ_IW 0
#define impl_jac_g_z_fun_SZ_W 1
int h_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int h_fun_alloc_mem(void);
int h_fun_init_mem(int mem);
void h_fun_free_mem(int mem);
int h_fun_checkout(void);
void h_fun_release(int mem);
void h_fun_incref(void);
void h_fun_decref(void);
casadi_int h_fun_n_in(void);
casadi_int h_fun_n_out(void);
casadi_real h_fun_default_in(casadi_int i);
const char* h_fun_name_in(casadi_int i);
const char* h_fun_name_out(casadi_int i);
const casadi_int* h_fun_sparsity_in(casadi_int i);
const casadi_int* h_fun_sparsity_out(casadi_int i);
int h_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define h_fun_SZ_ARG 3
#define h_fun_SZ_RES 1
#define h_fun_SZ_IW 0
#define h_fun_SZ_W 1
int path_con_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int path_con_fun_alloc_mem(void);
int path_con_fun_init_mem(int mem);
void path_con_fun_free_mem(int mem);
int path_con_fun_checkout(void);
void path_con_fun_release(int mem);
void path_con_fun_incref(void);
void path_con_fun_decref(void);
casadi_int path_con_fun_n_in(void);
casadi_int path_con_fun_n_out(void);
casadi_real path_con_fun_default_in(casadi_int i);
const char* path_con_fun_name_in(casadi_int i);
const char* path_con_fun_name_out(casadi_int i);
const casadi_int* path_con_fun_sparsity_in(casadi_int i);
const casadi_int* path_con_fun_sparsity_out(casadi_int i);
int path_con_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define path_con_fun_SZ_ARG 3
#define path_con_fun_SZ_RES 1
#define path_con_fun_SZ_IW 0
#define path_con_fun_SZ_W 0
int path_con_N_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int path_con_N_fun_alloc_mem(void);
int path_con_N_fun_init_mem(int mem);
void path_con_N_fun_free_mem(int mem);
int path_con_N_fun_checkout(void);
void path_con_N_fun_release(int mem);
void path_con_N_fun_incref(void);
void path_con_N_fun_decref(void);
casadi_int path_con_N_fun_n_in(void);
casadi_int path_con_N_fun_n_out(void);
casadi_real path_con_N_fun_default_in(casadi_int i);
const char* path_con_N_fun_name_in(casadi_int i);
const char* path_con_N_fun_name_out(casadi_int i);
const casadi_int* path_con_N_fun_sparsity_in(casadi_int i);
const casadi_int* path_con_N_fun_sparsity_out(casadi_int i);
int path_con_N_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define path_con_N_fun_SZ_ARG 2
#define path_con_N_fun_SZ_RES 1
#define path_con_N_fun_SZ_IW 0
#define path_con_N_fun_SZ_W 0
int obji_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int obji_fun_alloc_mem(void);
int obji_fun_init_mem(int mem);
void obji_fun_free_mem(int mem);
int obji_fun_checkout(void);
void obji_fun_release(int mem);
void obji_fun_incref(void);
void obji_fun_decref(void);
casadi_int obji_fun_n_in(void);
casadi_int obji_fun_n_out(void);
casadi_real obji_fun_default_in(casadi_int i);
const char* obji_fun_name_in(casadi_int i);
const char* obji_fun_name_out(casadi_int i);
const casadi_int* obji_fun_sparsity_in(casadi_int i);
const casadi_int* obji_fun_sparsity_out(casadi_int i);
int obji_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define obji_fun_SZ_ARG 5
#define obji_fun_SZ_RES 1
#define obji_fun_SZ_IW 0
#define obji_fun_SZ_W 6
int objN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int objN_fun_alloc_mem(void);
int objN_fun_init_mem(int mem);
void objN_fun_free_mem(int mem);
int objN_fun_checkout(void);
void objN_fun_release(int mem);
void objN_fun_incref(void);
void objN_fun_decref(void);
casadi_int objN_fun_n_in(void);
casadi_int objN_fun_n_out(void);
casadi_real objN_fun_default_in(casadi_int i);
const char* objN_fun_name_in(casadi_int i);
const char* objN_fun_name_out(casadi_int i);
const casadi_int* objN_fun_sparsity_in(casadi_int i);
const casadi_int* objN_fun_sparsity_out(casadi_int i);
int objN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define objN_fun_SZ_ARG 4
#define objN_fun_SZ_RES 1
#define objN_fun_SZ_IW 0
#define objN_fun_SZ_W 6
int gi_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int gi_fun_alloc_mem(void);
int gi_fun_init_mem(int mem);
void gi_fun_free_mem(int mem);
int gi_fun_checkout(void);
void gi_fun_release(int mem);
void gi_fun_incref(void);
void gi_fun_decref(void);
casadi_int gi_fun_n_in(void);
casadi_int gi_fun_n_out(void);
casadi_real gi_fun_default_in(casadi_int i);
const char* gi_fun_name_in(casadi_int i);
const char* gi_fun_name_out(casadi_int i);
const casadi_int* gi_fun_sparsity_in(casadi_int i);
const casadi_int* gi_fun_sparsity_out(casadi_int i);
int gi_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define gi_fun_SZ_ARG 5
#define gi_fun_SZ_RES 2
#define gi_fun_SZ_IW 0
#define gi_fun_SZ_W 6
int gN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int gN_fun_alloc_mem(void);
int gN_fun_init_mem(int mem);
void gN_fun_free_mem(int mem);
int gN_fun_checkout(void);
void gN_fun_release(int mem);
void gN_fun_incref(void);
void gN_fun_decref(void);
casadi_int gN_fun_n_in(void);
casadi_int gN_fun_n_out(void);
casadi_real gN_fun_default_in(casadi_int i);
const char* gN_fun_name_in(casadi_int i);
const char* gN_fun_name_out(casadi_int i);
const casadi_int* gN_fun_sparsity_in(casadi_int i);
const casadi_int* gN_fun_sparsity_out(casadi_int i);
int gN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define gN_fun_SZ_ARG 4
#define gN_fun_SZ_RES 1
#define gN_fun_SZ_IW 0
#define gN_fun_SZ_W 5
int Hi_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int Hi_fun_alloc_mem(void);
int Hi_fun_init_mem(int mem);
void Hi_fun_free_mem(int mem);
int Hi_fun_checkout(void);
void Hi_fun_release(int mem);
void Hi_fun_incref(void);
void Hi_fun_decref(void);
casadi_int Hi_fun_n_in(void);
casadi_int Hi_fun_n_out(void);
casadi_real Hi_fun_default_in(casadi_int i);
const char* Hi_fun_name_in(casadi_int i);
const char* Hi_fun_name_out(casadi_int i);
const casadi_int* Hi_fun_sparsity_in(casadi_int i);
const casadi_int* Hi_fun_sparsity_out(casadi_int i);
int Hi_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define Hi_fun_SZ_ARG 5
#define Hi_fun_SZ_RES 1
#define Hi_fun_SZ_IW 0
#define Hi_fun_SZ_W 2
int HN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int HN_fun_alloc_mem(void);
int HN_fun_init_mem(int mem);
void HN_fun_free_mem(int mem);
int HN_fun_checkout(void);
void HN_fun_release(int mem);
void HN_fun_incref(void);
void HN_fun_decref(void);
casadi_int HN_fun_n_in(void);
casadi_int HN_fun_n_out(void);
casadi_real HN_fun_default_in(casadi_int i);
const char* HN_fun_name_in(casadi_int i);
const char* HN_fun_name_out(casadi_int i);
const casadi_int* HN_fun_sparsity_in(casadi_int i);
const casadi_int* HN_fun_sparsity_out(casadi_int i);
int HN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define HN_fun_SZ_ARG 4
#define HN_fun_SZ_RES 1
#define HN_fun_SZ_IW 0
#define HN_fun_SZ_W 2
int Ji_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int Ji_fun_alloc_mem(void);
int Ji_fun_init_mem(int mem);
void Ji_fun_free_mem(int mem);
int Ji_fun_checkout(void);
void Ji_fun_release(int mem);
void Ji_fun_incref(void);
void Ji_fun_decref(void);
casadi_int Ji_fun_n_in(void);
casadi_int Ji_fun_n_out(void);
casadi_real Ji_fun_default_in(casadi_int i);
const char* Ji_fun_name_in(casadi_int i);
const char* Ji_fun_name_out(casadi_int i);
const casadi_int* Ji_fun_sparsity_in(casadi_int i);
const casadi_int* Ji_fun_sparsity_out(casadi_int i);
int Ji_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define Ji_fun_SZ_ARG 5
#define Ji_fun_SZ_RES 2
#define Ji_fun_SZ_IW 0
#define Ji_fun_SZ_W 2
int JN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int JN_fun_alloc_mem(void);
int JN_fun_init_mem(int mem);
void JN_fun_free_mem(int mem);
int JN_fun_checkout(void);
void JN_fun_release(int mem);
void JN_fun_incref(void);
void JN_fun_decref(void);
casadi_int JN_fun_n_in(void);
casadi_int JN_fun_n_out(void);
casadi_real JN_fun_default_in(casadi_int i);
const char* JN_fun_name_in(casadi_int i);
const char* JN_fun_name_out(casadi_int i);
const casadi_int* JN_fun_sparsity_in(casadi_int i);
const casadi_int* JN_fun_sparsity_out(casadi_int i);
int JN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define JN_fun_SZ_ARG 4
#define JN_fun_SZ_RES 1
#define JN_fun_SZ_IW 0
#define JN_fun_SZ_W 2
int Ci_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int Ci_fun_alloc_mem(void);
int Ci_fun_init_mem(int mem);
void Ci_fun_free_mem(int mem);
int Ci_fun_checkout(void);
void Ci_fun_release(int mem);
void Ci_fun_incref(void);
void Ci_fun_decref(void);
casadi_int Ci_fun_n_in(void);
casadi_int Ci_fun_n_out(void);
casadi_real Ci_fun_default_in(casadi_int i);
const char* Ci_fun_name_in(casadi_int i);
const char* Ci_fun_name_out(casadi_int i);
const casadi_int* Ci_fun_sparsity_in(casadi_int i);
const casadi_int* Ci_fun_sparsity_out(casadi_int i);
int Ci_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define Ci_fun_SZ_ARG 3
#define Ci_fun_SZ_RES 2
#define Ci_fun_SZ_IW 0
#define Ci_fun_SZ_W 0
int CN_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem);
int CN_fun_alloc_mem(void);
int CN_fun_init_mem(int mem);
void CN_fun_free_mem(int mem);
int CN_fun_checkout(void);
void CN_fun_release(int mem);
void CN_fun_incref(void);
void CN_fun_decref(void);
casadi_int CN_fun_n_in(void);
casadi_int CN_fun_n_out(void);
casadi_real CN_fun_default_in(casadi_int i);
const char* CN_fun_name_in(casadi_int i);
const char* CN_fun_name_out(casadi_int i);
const casadi_int* CN_fun_sparsity_in(casadi_int i);
const casadi_int* CN_fun_sparsity_out(casadi_int i);
int CN_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w);
#define CN_fun_SZ_ARG 2
#define CN_fun_SZ_RES 1
#define CN_fun_SZ_IW 0
#define CN_fun_SZ_W 0
#ifdef __cplusplus
} /* extern "C" */
#endif
