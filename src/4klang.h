// some useful song defines for 4klang
#define SAMPLE_RATE 44100
#define BPM 128.000000
#define MAX_INSTRUMENTS 11
#define MAX_PATTERNS 20
#define PATTERN_SIZE_SHIFT 7
#define PATTERN_SIZE (1 << PATTERN_SIZE_SHIFT)
#define MAX_TICKS (MAX_PATTERNS*PATTERN_SIZE)
#define SAMPLES_PER_TICK 5167
#define MAX_SAMPLES (SAMPLES_PER_TICK*MAX_TICKS)
#define POLYPHONY 2
#define FLOAT_32BIT
#define SAMPLE_TYPE float

#define WINDOWS_OBJECT

// declaration of the external synth render function, you'll always need that
// use this syntax if you're building in C (i.e. in debug, typically)
void  __stdcall	_4klang_render(void*);
// use this syntax if you're building in C++ (typically release, as it might compress better)
//extern "C" void __stdcall _4klang_render(void*);