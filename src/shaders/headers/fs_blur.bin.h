static const uint8_t fs_blur_glsl[1193] =
{
	0x46, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH........u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x07, 0x38, 0x00, 0x00, 0x38, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, // forms.8..8..u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x78, 0x04, 0x00, 0x00, // xColor......x...
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, // varying vec2 v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, // excoord0;.varyin
	0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // g vec4 v_texcoor
	0x64, 0x31, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, // d1;.varying vec4
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x3b, 0x0a, 0x76, 0x61, //  v_texcoord2;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // rying vec4 v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x33, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, // coord3;.varying 
	0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, // vec4 v_texcoord4
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, // ;.uniform vec4 u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x35, 0x36, 0x5d, 0x3b, 0x0a, 0x75, // _uniforms[56];.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
	0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, //  u_texColor;.voi
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, // d main ().{.  fl
	0x6f, 0x61, 0x74, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x31, 0x5f, 0x31, 0x3b, 0x0a, // oat _weight1_1;.
	0x20, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x31, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x75, //   _weight1_1 = u
	0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x30, 0x5d, 0x2e, 0x79, 0x3b, // _uniforms[20].y;
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, // .  float _weight
	0x32, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x32, 0x5f, // 2_2;.  _weight2_
	0x32, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, // 2 = u_uniforms[2
	0x30, 0x5d, 0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x5f, 0x77, // 0].z;.  float _w
	0x65, 0x69, 0x67, 0x68, 0x74, 0x33, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x77, 0x65, 0x69, // eight3_3;.  _wei
	0x67, 0x68, 0x74, 0x33, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // ght3_3 = u_unifo
	0x72, 0x6d, 0x73, 0x5b, 0x32, 0x30, 0x5d, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // rms[20].w;.  flo
	0x61, 0x74, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x34, 0x5f, 0x34, 0x3b, 0x0a, 0x20, // at _weight4_4;. 
	0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x34, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x75, 0x5f, //  _weight4_4 = u_
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x31, 0x5d, 0x2e, 0x78, 0x3b, 0x0a, // uniforms[21].x;.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, //   vec4 blur_5;. 
	0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, //  blur_5 = (textu
	0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // re2D (u_texColor
	0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x20, 0x2a, // , v_texcoord0) *
	0x20, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x73, 0x5b, 0x32, 0x30, 0x5d, 0x2e, //  u_uniforms[20].
	0x78, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, // x);.  blur_5 = (
	0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // blur_5 + (textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, // e2D (u_texColor,
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x2e, 0x78, 0x79, 0x29, //  v_texcoord1.xy)
	0x20, 0x2a, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x31, 0x5f, 0x31, 0x29, 0x29, 0x3b, //  * _weight1_1));
	0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, 0x75, // .  blur_5 = (blu
	0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // r_5 + (texture2D
	0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, //  (u_texColor, v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x2e, 0x7a, 0x77, 0x29, 0x20, 0x2a, 0x20, // texcoord1.zw) * 
	0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x31, 0x5f, 0x31, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // _weight1_1));.  
	0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, // blur_5 = (blur_5
	0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, //  + (texture2D (u
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // _texColor, v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x2e, 0x78, 0x79, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x77, 0x65, // coord2.xy) * _we
	0x69, 0x67, 0x68, 0x74, 0x32, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, // ight2_2));.  blu
	0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, // r_5 = (blur_5 + 
	0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, // (texture2D (u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // xColor, v_texcoo
	0x72, 0x64, 0x32, 0x2e, 0x7a, 0x77, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, // rd2.zw) * _weigh
	0x74, 0x32, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, // t2_2));.  blur_5
	0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, //  = (blur_5 + (te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // xture2D (u_texCo
	0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x33, // lor, v_texcoord3
	0x2e, 0x78, 0x79, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x33, 0x5f, // .xy) * _weight3_
	0x33, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, // 3));.  blur_5 = 
	0x28, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, // (blur_5 + (textu
	0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // re2D (u_texColor
	0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x33, 0x2e, 0x7a, 0x77, // , v_texcoord3.zw
	0x29, 0x20, 0x2a, 0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x33, 0x5f, 0x33, 0x29, 0x29, // ) * _weight3_3))
	0x3b, 0x0a, 0x20, 0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, // ;.  blur_5 = (bl
	0x75, 0x72, 0x5f, 0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // ur_5 + (texture2
	0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, // D (u_texColor, v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, 0x2e, 0x78, 0x79, 0x29, 0x20, 0x2a, // _texcoord4.xy) *
	0x20, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x34, 0x5f, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, //  _weight4_4));. 
	0x20, 0x62, 0x6c, 0x75, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x28, 0x62, 0x6c, 0x75, 0x72, 0x5f, //  blur_5 = (blur_
	0x35, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, // 5 + (texture2D (
	0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, // u_texColor, v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, 0x2e, 0x7a, 0x77, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x77, // xcoord4.zw) * _w
	0x65, 0x69, 0x67, 0x68, 0x74, 0x34, 0x5f, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // eight4_4));.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x62, 0x6c, 0x75, // _FragColor = blu
	0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // r_5;.}...
};
static const uint8_t fs_blur_dx9[622] =
{
	0x46, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH........u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x17, 0x38, 0x00, 0x00, 0x16, 0x00, 0x50, 0x02, 0x00, 0x03, 0xff, // forms.8....P....
	0xff, 0xfe, 0xff, 0x2f, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, // .../.CTAB.......
	0x00, 0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, // .|...D..........
	0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // .P.......`......
	0x00, 0x16, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, // .....l.......u_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, // exColor.........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x75, 0x6e, 0x69, 0x66, 0x6f, // .........u_unifo
	0x72, 0x6d, 0x73, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x38, 0x00, 0x00, // rms..........8..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x33, 0x30, 0x2e, 0x39, 0x32, 0x30, 0x30, 0x2e, 0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0xab, // .30.9200.16384..
	0xab, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, // ................
	0x02, 0x05, 0x00, 0x01, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x02, // ................
	0x80, 0x02, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x03, 0x80, 0x03, 0x00, 0x0f, // ................
	0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x04, 0x80, 0x04, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // .........B......
	0x80, 0x01, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // ................
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x14, 0x00, 0x55, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, // .......U.B......
	0x80, 0x00, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // ................
	0x80, 0x01, 0x00, 0xe4, 0x80, 0x14, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xe4, 0x80, 0x42, 0x00, 0x00, // .............B..
	0x03, 0x01, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xee, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x14, 0x00, 0x55, 0xa0, 0x00, 0x00, 0xe4, // ...........U....
	0x80, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, // .B..............
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x14, 0x00, 0xaa, // ................
	0xa0, 0x00, 0x00, 0xe4, 0x80, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x02, 0x00, 0xee, // .....B..........
	0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, // ................
	0x80, 0x14, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xe4, 0x80, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, // .........B......
	0x80, 0x03, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // ................
	0x80, 0x01, 0x00, 0xe4, 0x80, 0x14, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xe4, 0x80, 0x42, 0x00, 0x00, // .............B..
	0x03, 0x01, 0x00, 0x0f, 0x80, 0x03, 0x00, 0xee, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x14, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xe4, // ................
	0x80, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x04, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, // .B..............
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x15, 0x00, 0x00, // ................
	0xa0, 0x00, 0x00, 0xe4, 0x80, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x04, 0x00, 0xee, // .....B..........
	0x90, 0x00, 0x08, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x08, 0x0f, 0x80, 0x01, 0x00, 0xe4, // ................
	0x80, 0x15, 0x00, 0x00, 0xa0, 0x00, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,             // ..............
};
static const uint8_t fs_blur_dx11[1133] =
{
	0x46, 0x53, 0x48, 0x03, 0xdb, 0xe3, 0xfb, 0xec, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x75, 0x6e, 0x69, // FSH........u_uni
	0x66, 0x6f, 0x72, 0x6d, 0x73, 0x17, 0x38, 0x00, 0x00, 0x38, 0x00, 0x4c, 0x04, 0x44, 0x58, 0x42, // forms.8..8.L.DXB
	0x43, 0xf4, 0x00, 0xb1, 0x20, 0xe7, 0x3a, 0xf6, 0x07, 0xeb, 0xa2, 0x7d, 0xfb, 0xff, 0x88, 0x98, // C... .:....}....
	0x40, 0x01, 0x00, 0x00, 0x00, 0x4c, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // @....L.......,..
	0x00, 0xe4, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0xb0, 0x00, 0x00, // .........ISGN...
	0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0xa4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, // ................
	0x00, 0xa4, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, // ................
	0x00, 0xa4, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x05, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // TION.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x2c, 0x03, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDR,...@..
	0x00, 0xcb, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // .....Y...F. ....
	0x00, 0x16, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .....Z....`.....
	0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, // .X....p......UU.
	0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, // .b...2.......b..
	0x03, 0xf2, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, // .........b......
	0x00, 0x03, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, // .....b..........
	0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .b...........e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, // .. ......h......
	0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, // .E...........F..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, // .F.......V. ....
	0x00, 0x14, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....E..........
	0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // ..`......2......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, // .....F......... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x1a, 0x10, // .E..............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x85, 0x20, 0x00, 0x00, 0x00, 0x00, // .F.......V. ....
	0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // .....F.......E..
	0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x03, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .F~.......`.....
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .2...........F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0xa6, 0x8a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, // ....... ........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, // .F.......E......
	0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x1a, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, // .............F~.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // ......`......2..
	0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .........F......
	0x00, 0xa6, 0x8a, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // ... .........F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....E..........
	0x00, 0x46, 0x10, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, // ..`......2......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf6, 0x8f, 0x20, // .....F......... 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x1a, 0x10, // .E..............
	0x00, 0x04, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf6, 0x8f, 0x20, 0x00, 0x00, 0x00, 0x00, // .F......... ....
	0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // .....F.......E..
	0x09, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x05, 0x00, 0x00, // .........F......
	0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .F~.......`.....
	0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .2...........F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, // ....... ........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, // .F.......E......
	0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x1a, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, // .............F~.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // ......`......2..
	0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, // .. ......F......
	0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // ... .........F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x03,                   // .....>.......
};
