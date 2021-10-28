#ifndef DEBUG_C_INCLUDED

#define DEBUG 0
#if defined DEBUG && DEBUG == 1
	#define debug(x) { if(DEBUG) printf(x);}
	#define debugf(x) { x; }
#else
	#define debug(x) {}
	#define debugf(x) {}
#endif


#endif