static const uint8_t vs_material_normal_glsl[1170] =
{
	0x56, 0x53, 0x48, 0x03, 0x50, 0x7c, 0x4d, 0x5d, 0x03, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH.P|M]...u_mod
	0x65, 0x6c, 0x09, 0x20, 0x00, 0x00, 0x20, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // el. .. ..u_model
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, // ViewProj.......u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x38, 0x00, 0x4e, // _uniforms.8..8.N
	0x04, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, // ...attribute vec
	0x34, 0x20, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, // 4 a_normal;.attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, // ibute vec3 a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // ition;.attribute
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, //  vec4 a_tangent;
	0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // .attribute vec2 
	0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, // a_texcoord0;.var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, // ying vec3 v_bita
	0x6e, 0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, // ngent;.varying v
	0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x61, // ec3 v_normal;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, // rying vec3 v_tan
	0x67, 0x65, 0x6e, 0x74, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, // gent;.varying ve
	0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, // c2 v_texcoord0;.
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x76, // varying vec3 v_v
	0x69, 0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, // iew;.uniform mat
	0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x75, // 4 u_model[32];.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, // niform mat4 u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // delViewProj;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, // form vec4 u_unif
	0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x36, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, // orms[56];.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // ain ().{.  vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_1;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_1.w = 1.0;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, // tmpvar_1.xyz = a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, // _position;.  gl_
	0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, // Position = (u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, // delViewProj * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // pvar_1);.  vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_2;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, // ar_2.w = 0.0;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, // tmpvar_2.xyz = (
	0x28, 0x61, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x2a, 0x20, 0x32, 0x2e, 0x30, 0x29, // (a_normal * 2.0)
	0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, //  - 1.0).xyz;.  v
	0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, // ec3 tmpvar_3;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, // tmpvar_3 = norma
	0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x30, 0x5d, // lize((u_model[0]
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x2e, 0x78, 0x79, 0x7a, //  * tmpvar_2).xyz
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x20, 0x3d, 0x20, // );.  v_normal = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, // tmpvar_3;.  vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_4;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, // var_4.w = 1.0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, //  tmpvar_4.xyz = 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, // a_position;.  v_
	0x76, 0x69, 0x65, 0x77, 0x20, 0x3d, 0x20, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, // view = normalize
	0x28, 0x28, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x33, 0x33, 0x5d, // ((u_uniforms[33]
	0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // .xyz - (u_model[
	0x30, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x2e, 0x78, // 0] * tmpvar_4).x
	0x79, 0x7a, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // yz));.  v_texcoo
	0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // rd0 = a_texcoord
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 0;.  vec4 tmpvar
	0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, // _5;.  tmpvar_5 =
	0x20, 0x28, 0x28, 0x61, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x2a, 0x20, 0x32, //  ((a_tangent * 2
	0x2e, 0x30, 0x29, 0x20, 0x2d, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // .0) - 1.0);.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_6;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x30, 0x2e, 0x30, 0x3b, // mpvar_6.w = 0.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_6.xyz 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, // = tmpvar_5.xyz;.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, //   vec3 tmpvar_7;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x6e, 0x6f, // .  tmpvar_7 = no
	0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // rmalize((u_model
	0x5b, 0x30, 0x5d, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x2e, // [0] * tmpvar_6).
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, // xyz);.  v_tangen
	0x74, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, // t = tmpvar_7;.  
	0x76, 0x5f, 0x62, 0x69, 0x74, 0x61, 0x6e, 0x67, 0x65, 0x6e, 0x74, 0x20, 0x3d, 0x20, 0x28, 0x28, // v_bitangent = ((
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x79, 0x7a, 0x78, 0x20, 0x2a, 0x20, // (tmpvar_3.yzx * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x7a, 0x78, 0x79, 0x29, 0x20, 0x2d, 0x20, // tmpvar_7.zxy) - 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x7a, 0x78, 0x79, 0x20, 0x2a, 0x20, // (tmpvar_3.zxy * 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x37, 0x2e, 0x79, 0x7a, 0x78, 0x29, 0x29, 0x20, 0x2a, // tmpvar_7.yzx)) *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, //  tmpvar_5.w);.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t vs_material_normal_dx9[926] =
{
	0x56, 0x53, 0x48, 0x03, 0x50, 0x7c, 0x4d, 0x5d, 0x03, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH.P|M]...u_mod
	0x65, 0x6c, 0x09, 0x20, 0x22, 0x00, 0x04, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // el. "....u_model
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x01, 0x26, 0x00, 0x04, 0x00, 0x0a, 0x75, // ViewProj..&....u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x22, 0x00, 0x5c, // _uniforms.8.."..
	0x03, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x3b, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, // .......;.CTAB...
	0x00, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, // ................
	0x00, 0x00, 0x91, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x22, // .........X....."
	0x00, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, // .....`.......p..
	0x00, 0x02, 0x00, 0x26, 0x00, 0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...&............
	0x00, 0x90, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, // ........."......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, // .....u_model....
	0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, // ..... .......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, // odelViewProj....
	0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, // .............u_u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, // niforms.........
	0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, // .8.......vs_3_0.
	0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, // Microsoft (R) HL
	0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, // SL Shader Compil
	0x65, 0x72, 0x20, 0x39, 0x2e, 0x33, 0x30, 0x2e, 0x39, 0x32, 0x30, 0x30, 0x2e, 0x31, 0x36, 0x33, // er 9.30.9200.163
	0x38, 0x34, 0x00, 0xab, 0xab, 0x51, 0x00, 0x00, 0x05, 0x2a, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, // 84...Q...*......
	0x40, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, // @...............
	0x02, 0x03, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00, 0x80, 0x02, 0x00, 0x0f, // ................
	0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x03, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x07, 0x00, 0x00, // ................
	0x80, 0x01, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x80, 0x02, 0x00, 0x07, // ................
	0xe0, 0x1f, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00, 0x80, 0x03, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, // ................
	0x02, 0x05, 0x00, 0x00, 0x80, 0x04, 0x00, 0x03, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x06, // ................
	0x80, 0x05, 0x00, 0x07, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x27, 0x00, 0xe4, // .............'..
	0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x26, 0x00, 0xe4, // ...U.........&..
	0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // ................
	0x80, 0x28, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, // .(..............
	0x03, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x29, 0x00, 0xe4, 0xa0, 0x05, 0x00, 0x00, // .........)......
	0x03, 0x00, 0x00, 0x07, 0x80, 0x23, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, // .....#.....U....
	0x04, 0x00, 0x00, 0x07, 0x80, 0x22, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, // ....."..........
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x24, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0xaa, // .........$......
	0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, // ................
	0x80, 0x25, 0x00, 0xe4, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, // .%..............
	0x81, 0x21, 0x00, 0xe4, 0xa0, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xe4, // .!..............
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xff, // ................
	0x80, 0x05, 0x00, 0x00, 0x03, 0x05, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xe4, // ................
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x2a, 0x00, 0x00, // .............*..
	0xa0, 0x2a, 0x00, 0x55, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0x55, // .*.U...........U
	0x80, 0x23, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0b, 0x80, 0x22, 0x00, 0xa4, // .#..........."..
	0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xa4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, // ................
	0x80, 0x24, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x00, 0x00, 0xf4, 0x80, 0x24, 0x00, 0x00, // .$...........$..
	0x02, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // ................
	0x80, 0x02, 0x00, 0xe4, 0x90, 0x2a, 0x00, 0x00, 0xa0, 0x2a, 0x00, 0x55, 0xa0, 0x05, 0x00, 0x00, // .....*...*.U....
	0x03, 0x02, 0x00, 0x07, 0x80, 0x00, 0x00, 0x55, 0x80, 0x23, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, // .......U.#......
	0x04, 0x02, 0x00, 0x07, 0x80, 0x22, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0xe4, // ....."..........
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x24, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, // .........$......
	0x80, 0x02, 0x00, 0xe4, 0x80, 0x24, 0x00, 0x00, 0x02, 0x02, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, // .....$..........
	0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xd2, 0x80, 0x02, 0x00, 0xc9, // ................
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xc9, 0x80, 0x02, 0x00, 0xd2, // ................
	0x80, 0x00, 0x00, 0xe4, 0x81, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x07, 0xe0, 0x01, 0x00, 0xe4, // ................
	0x80, 0x01, 0x00, 0x00, 0x02, 0x03, 0x00, 0x07, 0xe0, 0x02, 0x00, 0xe4, 0x80, 0x05, 0x00, 0x00, // ................
	0x03, 0x01, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, // ................
	0x02, 0x04, 0x00, 0x03, 0xe0, 0x03, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,             // ..............
};
static const uint8_t vs_material_normal_dx11[1697] =
{
	0x56, 0x53, 0x48, 0x03, 0x50, 0x7c, 0x4d, 0x5d, 0x03, 0x00, 0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH.P|M]...u_mod
	0x65, 0x6c, 0x09, 0x20, 0x00, 0x00, 0x80, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // el. .....u_model
	0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x09, 0x00, 0x00, 0x08, 0x04, 0x00, 0x0a, 0x75, // ViewProj.......u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x40, 0x08, 0x38, 0x00, 0x54, // _uniforms.8@.8.T
	0x06, 0x44, 0x58, 0x42, 0x43, 0x69, 0x73, 0x50, 0xff, 0x5c, 0xdd, 0x07, 0x96, 0xc9, 0x0a, 0x67, // .DXBCisP.......g
	0x54, 0x70, 0x2d, 0x91, 0x3c, 0x01, 0x00, 0x00, 0x00, 0x54, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, // Tp-.<....T......
	0x00, 0x2c, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, // .,...........ISG
	0x4e, 0x8c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // N............h..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x07, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....o..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x78, 0x00, 0x00, // .............x..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x0f, 0x0f, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x4e, 0x4f, 0x52, // .............NOR
	0x4d, 0x41, 0x4c, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x41, 0x4e, // MAL.POSITION.TAN
	0x47, 0x45, 0x4e, 0x54, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // GENT.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0xc8, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN...........
	0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, // ................
	0x00, 0xad, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, // ................
	0x00, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x42, 0x49, 0x4e, // .SV_POSITION.BIN
	0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0x4e, 0x4f, 0x52, 0x4d, 0x41, 0x4c, 0x00, 0x54, 0x41, 0x4e, // ORMAL.NORMAL.TAN
	0x47, 0x45, 0x4e, 0x54, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // GENT.TEXCOORD...
	0xab, 0x53, 0x48, 0x44, 0x52, 0xbc, 0x04, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x2f, 0x01, 0x00, // .SHDR....@.../..
	0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, // .Y...F. ........
	0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // ._...r......._..
	0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, 0x10, // .r......._......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, // ....._...2......
	0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .g.... .........
	0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .e...r ......e..
	0x03, 0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, // .r ......e...r .
	0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, // .....e...2 .....
	0x00, 0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, // .e...r ......h..
	0x02, 0x03, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8..........
	0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .V.......F. ....
	0x00, 0x81, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, // .F. ............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .....F.......2..
	0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .........F. ....
	0x00, 0x82, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .............F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .......... .....
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .F.......F. ....
	0x00, 0x83, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0f, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2...r......
	0x00, 0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // .F........@.....
	0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, // @...@...@.....@.
	0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, // ................
	0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, // .8...r.......V..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....F. ........
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xb2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x88, 0x20, // .2...........F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x08, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, // .F.......2...r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....F. ........
	0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .............F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, // .....F.......D..
	0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .........:......
	0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, // .8...r..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .....F.......2..
	0x0f, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x02, 0x00, 0x00, // .........F......
	0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // ..@.....@...@...
	0x40, 0x00, 0x00, 0x00, 0x40, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, // @...@.@.........
	0xbf, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x80, 0xbf, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, // .........8...r..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, // .....V.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, // .........2...r..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....F. ........
	0x00, 0x06, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, // .........F......
	0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, // .2...r.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, // .F..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .....F.......F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....D..........
	0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, // .:.......8...r..
	0x00, 0x01, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .............F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, // .....8...r......
	0x00, 0x26, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x04, 0x10, 0x00, 0x01, 0x00, 0x00, // .&..............
	0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x96, 0x04, 0x10, // .2...r..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x09, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .....&.......F..
	0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, // .A.......6...r .
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .....F.......6..
	0x05, 0x72, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, // .r ......F......
	0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, // .8...r .........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .....F.......6..
	0x05, 0x32, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, // .2 ......F......
	0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, // .8...r.......V..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....F. ........
	0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, // .2...r.......F. 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, // .F.......2...r..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .....F. ........
	0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x00, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .....r.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .....F. ........
	0x00, 0x00, 0x00, 0x00, 0x09, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, // .....r.......F..
	0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, // .A.......F. ....
	0x00, 0xa5, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F......
	0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, // .D...........:..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x72, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, // .....8...r .....
	0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x04, 0x02, 0x00, 0x01, 0x00, 0x03, 0x00, 0x10, 0x00, 0xc0, // .>..............
	0x0b,                                                                                           // .
};
