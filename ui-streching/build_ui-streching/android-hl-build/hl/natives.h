﻿// Generated by HLC 4.0.0 (HL v4)
#ifndef HL_NATIVES_H
#define HL_NATIVES_H
// Abstract decls
typedef struct _hl_bytes_map hl_bytes_map;
typedef struct _hl_int_map hl_int_map;
typedef struct _hl_obj_map hl_obj_map;
typedef struct _hl_random hl_random;

#include <hl/natives.h>
#include <_std/String.h>

// Natives functions
HL_API varray* hl_alloc_array(hl_type*,int);
HL_API vbyte* hl_alloc_bytes(int);
HL_API vbyte* hl_alloc_bytes(int);
HL_API vdynamic* hl_alloc_enum_dyn(hl_type*,int,varray*,int);
HL_API vdynamic* hl_alloc_obj(hl_type*);
HL_API void hl_array_blit(varray*,int,varray*,int,int);
HL_API hl_type* hl_array_type(varray*);
HL_API void hl_breakpoint(void);
HL_API void hl_bsort_f64(vbyte*,int,int,vclosure*);
HL_API void hl_bsort_i32(vbyte*,int,int,vclosure*);
HL_API void hl_bytes_blit(vbyte*,int,vbyte*,int,int);
HL_API int hl_bytes_compare(vbyte*,int,vbyte*,int,int);
HL_API int hl_bytes_compare16(vbyte*,vbyte*,int);
HL_API void hl_bytes_fill(vbyte*,int,int,int);
HL_API int hl_bytes_find(vbyte*,int,int,vbyte*,int,int);
HL_API vdynamic* hl_call_method(vdynamic*,varray*);
HL_API int hl_date_from_string(vbyte*,int);
HL_API int hl_date_from_time(double);
HL_API int hl_date_new(int,int,int,int,int,int);
HL_API vbyte* hl_date_to_string(int,int*);
HL_API vbyte* hl_file_contents(vbyte*,int*);
HL_API vbyte* hl_ftos(double,int*);
HL_API vdynamic* hl_get_closure_value(vdynamic*);
HL_API vdynamic* hl_get_virtual_value(vdynamic*);
HL_API int hl_hash(vbyte*);
HL_API hl_bytes_map* hl_hballoc(void);
HL_API bool hl_hbexists(hl_bytes_map*,vbyte*);
HL_API vdynamic* hl_hbget(hl_bytes_map*,vbyte*);
HL_API bool hl_hbremove(hl_bytes_map*,vbyte*);
HL_API void hl_hbset(hl_bytes_map*,vbyte*,vdynamic*);
HL_API varray* hl_hbvalues(hl_bytes_map*);
HL_API hl_int_map* hl_hialloc(void);
HL_API bool hl_hiexists(hl_int_map*,int);
HL_API vdynamic* hl_higet(hl_int_map*,int);
HL_API void hl_hiset(hl_int_map*,int,vdynamic*);
HL_API hl_obj_map* hl_hoalloc(void);
HL_API vdynamic* hl_hoget(hl_obj_map*,vdynamic*);
HL_API void hl_hoset(hl_obj_map*,vdynamic*,vdynamic*);
HL_API void hl_init_kore(vbyte*,int,int,int,bool,int,int);
HL_API vbyte* hl_itos(int,int*);
HL_API bool hl_kore_can_lock_mouse(int);
HL_API vbyte* hl_kore_create_fragmentshader(vbyte*,int);
HL_API vbyte* hl_kore_create_geometryshader(vbyte*,int);
HL_API vbyte* hl_kore_create_indexbuffer(int);
HL_API vbyte* hl_kore_create_pipeline(void);
HL_API vbyte* hl_kore_create_tesscontrolshader(vbyte*,int);
HL_API vbyte* hl_kore_create_tessevalshader(vbyte*,int);
HL_API vbyte* hl_kore_create_vertexbuffer(int,vbyte*,int,int);
HL_API vbyte* hl_kore_create_vertexshader(vbyte*,int);
HL_API vbyte* hl_kore_create_vertexstructure(bool);
HL_API vbyte* hl_kore_cubemap_create(int,int,int,int,int);
HL_API int hl_kore_cubemap_target_get_height(vbyte*);
HL_API int hl_kore_cubemap_target_get_width(vbyte*);
HL_API int hl_kore_cubemap_texture_get_height(vbyte*);
HL_API int hl_kore_cubemap_texture_get_width(vbyte*);
HL_API void hl_kore_delete_pipeline(vbyte*);
HL_API int hl_kore_display_count(void);
HL_API bool hl_kore_display_is_primary(int);
HL_API vbyte* hl_kore_file_contents(vbyte*,int*);
HL_API vbyte* hl_kore_float32array_alloc(int);
HL_API float hl_kore_float32array_get(vbyte*,int);
HL_API void hl_kore_float32array_set(vbyte*,int,float);
HL_API vbyte* hl_kore_fragmentshader_from_source(vbyte*);
HL_API void hl_kore_generate_mipmaps_target(vbyte*,int);
HL_API void hl_kore_generate_mipmaps_texture(vbyte*,int);
HL_API double hl_kore_get_time(void);
HL_API int hl_kore_get_window_height(int);
HL_API int hl_kore_get_window_width(int);
HL_API void hl_kore_graphics_clear(int,int,float,int);
HL_API void hl_kore_graphics_disable_scissor(void);
HL_API void hl_kore_graphics_draw_all_indexed_vertices(void);
HL_API void hl_kore_graphics_draw_all_indexed_vertices_instanced(int);
HL_API void hl_kore_graphics_draw_indexed_vertices(int,int);
HL_API void hl_kore_graphics_draw_indexed_vertices_instanced(int,int,int);
HL_API bool hl_kore_graphics_render_targets_inverted_y(void);
HL_API void hl_kore_graphics_render_to_face(vbyte*,int);
HL_API void hl_kore_graphics_render_to_texture(vbyte*);
HL_API void hl_kore_graphics_render_to_textures(vbyte*,vbyte*,vbyte*,vbyte*,vbyte*,vbyte*,vbyte*,vbyte*,int);
HL_API void hl_kore_graphics_restore_render_target(void);
HL_API void hl_kore_graphics_scissor(int,int,int,int);
HL_API void hl_kore_graphics_set_bool(vbyte*,bool);
HL_API void hl_kore_graphics_set_cube_map_compare_mode(vbyte*,bool);
HL_API void hl_kore_graphics_set_cubemap_depth(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_cubemap_target(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_cubemap_texture(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_float(vbyte*,float);
HL_API void hl_kore_graphics_set_float2(vbyte*,float,float);
HL_API void hl_kore_graphics_set_float3(vbyte*,float,float,float);
HL_API void hl_kore_graphics_set_float4(vbyte*,float,float,float,float);
HL_API void hl_kore_graphics_set_floats(vbyte*,vbyte*,int);
HL_API void hl_kore_graphics_set_image_texture(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_indexbuffer(vbyte*);
HL_API void hl_kore_graphics_set_int(vbyte*,int);
HL_API void hl_kore_graphics_set_matrix(vbyte*,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float);
HL_API void hl_kore_graphics_set_matrix3(vbyte*,float,float,float,float,float,float,float,float,float);
HL_API void hl_kore_graphics_set_render_target(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_texture(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_texture3d_parameters(vbyte*,int,int,int,int,int,int);
HL_API void hl_kore_graphics_set_texture_compare_mode(vbyte*,bool);
HL_API void hl_kore_graphics_set_texture_depth(vbyte*,vbyte*);
HL_API void hl_kore_graphics_set_texture_parameters(vbyte*,int,int,int,int,int);
HL_API void hl_kore_graphics_set_vertexbuffer(vbyte*);
HL_API void hl_kore_graphics_set_vertexbuffers(vbyte*,vbyte*,vbyte*,vbyte*,int);
HL_API void hl_kore_graphics_viewport(int,int,int,int);
HL_API vbyte* hl_kore_indexbuffer_lock(vbyte*);
HL_API void hl_kore_indexbuffer_unlock(vbyte*);
HL_API void hl_kore_init_audio(vclosure*,vclosure*,int*);
HL_API vbyte* hl_kore_int16array_alloc(int);
HL_API int hl_kore_int16array_get(vbyte*,int);
HL_API void hl_kore_int16array_set(vbyte*,int,int);
HL_API bool hl_kore_is_mouse_locked(int);
HL_API void hl_kore_log(vbyte*);
HL_API void hl_kore_mouse_lock(int);
HL_API void hl_kore_mouse_unlock(int);
HL_API bool hl_kore_non_pow2_textures_supported(void);
HL_API void hl_kore_pipeline_compile(vbyte*,vbyte*,vbyte*,vbyte*,vbyte*);
HL_API vbyte* hl_kore_pipeline_get_constantlocation(vbyte*,vbyte*);
HL_API vbyte* hl_kore_pipeline_get_textureunit(vbyte*,vbyte*);
HL_API void hl_kore_pipeline_set(vbyte*);
HL_API void hl_kore_pipeline_set_fragment_shader(vbyte*,vbyte*);
HL_API void hl_kore_pipeline_set_geometry_shader(vbyte*,vbyte*);
HL_API void hl_kore_pipeline_set_states(vbyte*,int,int,int,int,int,int,int,int,int,int,bool,int,int,int,bool,bool,bool,bool,bool);
HL_API void hl_kore_pipeline_set_tesscontrol_shader(vbyte*,vbyte*);
HL_API void hl_kore_pipeline_set_tesseval_shader(vbyte*,vbyte*);
HL_API void hl_kore_pipeline_set_vertex_shader(vbyte*,vbyte*);
HL_API void hl_kore_register_callbacks(vclosure*,vclosure*,vclosure*,vclosure*,vclosure*);
HL_API void hl_kore_register_copycutpaste(vclosure*,vclosure*,vclosure*);
HL_API void hl_kore_register_dropfiles(vclosure*);
HL_API void hl_kore_register_gamepad(int,vclosure*,vclosure*);
HL_API void hl_kore_register_keyboard(vclosure*,vclosure*,vclosure*);
HL_API void hl_kore_register_mouse(vclosure*,vclosure*,vclosure*,vclosure*);
HL_API void hl_kore_register_pen(vclosure*,vclosure*,vclosure*);
HL_API void hl_kore_register_sensor(vclosure*,vclosure*);
HL_API void hl_kore_register_surface(vclosure*,vclosure*,vclosure*);
HL_API vbyte* hl_kore_render_target_create(int,int,int,int,int,int);
HL_API int hl_kore_render_target_get_height(vbyte*);
HL_API int hl_kore_render_target_get_real_height(vbyte*);
HL_API int hl_kore_render_target_get_real_width(vbyte*);
HL_API int hl_kore_render_target_get_width(vbyte*);
HL_API int hl_kore_render_target_set_depth_stencil_from(vbyte*,vbyte*);
HL_API void hl_kore_render_target_unload(vbyte*);
HL_API void hl_kore_set_mipmap_texture(vbyte*,vbyte*,int);
HL_API void hl_kore_show_mouse(bool);
HL_API vbyte* hl_kore_sound_init_vorbis(vbyte*,int);
HL_API vbyte* hl_kore_sound_init_wav(vbyte*,vbyte*,double*);
HL_API bool hl_kore_sound_next_vorbis_samples(vbyte*,vbyte*,int,bool,bool);
HL_API vbyte* hl_kore_texture_create(int,int,int,bool);
HL_API vbyte* hl_kore_texture_create3d(int,int,int,int,bool);
HL_API vbyte* hl_kore_texture_create_from_file(vbyte*,bool);
HL_API vbyte* hl_kore_texture_from_bytes(vbyte*,int,int,int,bool);
HL_API vbyte* hl_kore_texture_from_bytes3d(vbyte*,int,int,int,int,bool);
HL_API int hl_kore_texture_get_height(vbyte*);
HL_API int hl_kore_texture_get_real_height(vbyte*);
HL_API int hl_kore_texture_get_real_width(vbyte*);
HL_API int hl_kore_texture_get_width(vbyte*);
HL_API void hl_kore_texture_unload(vbyte*);
HL_API vbyte* hl_kore_uint32array_alloc(int);
HL_API void hl_kore_uint32array_free(vbyte*);
HL_API int hl_kore_uint32array_get(vbyte*,int);
HL_API void hl_kore_uint32array_set(vbyte*,int,int);
HL_API int hl_kore_vertexbuffer_count(vbyte*);
HL_API vbyte* hl_kore_vertexbuffer_lock(vbyte*);
HL_API int hl_kore_vertexbuffer_stride(vbyte*);
HL_API void hl_kore_vertexbuffer_unlock(vbyte*,int);
HL_API vbyte* hl_kore_vertexshader_from_source(vbyte*);
HL_API void hl_kore_vertexstructure_add(vbyte*,vbyte*,int);
HL_API vdynamic* hl_make_closure(vdynamic*,vdynamic*);
HL_API vdynamic* hl_make_var_args(vclosure*);
HL_API double hl_math_abs(double);
HL_API int hl_math_ceil(double);
HL_API double hl_math_cos(double);
HL_API double hl_math_exp(double);
HL_API int hl_math_floor(double);
HL_API bool hl_math_isnan(double);
HL_API double hl_math_log(double);
HL_API double hl_math_pow(double,double);
HL_API int hl_math_round(double);
HL_API double hl_math_sin(double);
HL_API double hl_math_sqrt(double);
HL_API double hl_math_tan(double);
HL_API vdynamic* hl_no_closure(vdynamic*);
HL_API bool hl_obj_delete_field(vdynamic*,int);
HL_API vdynamic* hl_obj_get_field(vdynamic*,int);
HL_API bool hl_obj_has_field(vdynamic*,int);
HL_API void hl_obj_set_field(vdynamic*,int,vdynamic*);
HL_API double hl_parse_float(vbyte*,int,int);
HL_API vdynamic* hl_parse_int(vbyte*,int,int);
HL_API int hl_ptr_compare(vdynamic*,vdynamic*);
HL_API double hl_rnd_float(hl_random*);
HL_API hl_random* hl_rnd_init_system(void);
HL_API void hl_run_kore(void);
HL_API void hl_set_error_handler(vclosure*);
HL_API int hl_string_compare(vbyte*,vbyte*,int);
HL_API bool hl_sys_is64(void);
HL_API void hl_sys_print(vbyte*);
HL_API bool hl_sys_utf8_path(void);
HL_API int hl_type_args_count(hl_type*);
HL_API varray* hl_type_enum_fields(hl_type*);
HL_API varray* hl_type_enum_values(hl_type*);
HL_API vdynamic* hl_type_get_global(hl_type*);
HL_API vbyte* hl_type_name(hl_type*);
HL_API bool hl_type_safe_cast(hl_type*,hl_type*);
HL_API bool hl_type_set_global(hl_type*,vdynamic*);
HL_API vbyte* hl_ucs2_lower(vbyte*,int,int);
HL_API vbyte* hl_ucs2_upper(vbyte*,int,int);
HL_API int hl_ucs2length(vbyte*,int);
HL_API vbyte* hl_url_decode(vbyte*,int*);
HL_API vbyte* hl_utf16_to_utf8(vbyte*,int,int*);
HL_API vbyte* hl_utf8_to_utf16(vbyte*,int,int*);
HL_API vdynamic* hl_value_cast(vdynamic*,hl_type*);
HL_API vbyte* hl_value_to_string(vdynamic*,int*);
#endif

