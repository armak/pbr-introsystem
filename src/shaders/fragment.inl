static const char* fragment = \
"uniform int m;\n"
"float time = m*.001;\n"
"void main(){\n"
	"vec2 res = vec2(1280,720), uv = 1.-2.*gl_FragCoord.xy/res.xy;\n"
	"uv.y *= res.y/res.x;\n"
	"gl_FragColor = vec4(uv,.5+.5*sin(time),1);\n"
"}\n";