#include <stdio.h>
#include <sys/types.h>
#include <uk/config.h>

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

int memcached_main(int argc, char **argv);
uid_t memcached_getuid(void) { return 1; }
uid_t memcached_geteuid(void) { return 1; }

int uk_app_main(void)
{
	char *argv[] = {
		"memcached", "-p", "11211",
		"-t", STR(CONFIG_APPMEMCACHED_THREADS), "-v", NULL
	};

	printf("Starting memcached on TCP port 11211 with %s worker(s)\n",
	       STR(CONFIG_APPMEMCACHED_THREADS));
	return memcached_main(6, argv);
}
