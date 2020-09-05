#include <stdio.h>
#include <dirent.h>
#include <errno.h>


int main(void) {
	
	DIR* uma = opendir("uma0:");
	if (uma) {
		// Time to delete the id.dat!
		int del = remove("uma0:id.dat");
		if (!del) {
			printf("yay");
		}
	}	
	scePowerRequestStandby();
}
