#include "image.capnp.h"
#include <capnp/message.h>
#include <capnp/serialize-packed.h>
#include <ctime>
#include <fcntl.h>

int main(int argc, char** argv){
	::capnp::MallocMessageBuilder message;
	Image::Builder img = message.initRoot<Image>();
	img.setId( 0 );
	img.setShortname("Short name");
	img.setTimestamp(time(nullptr));

	int fd = open("ceral.dat", O_WRONLY | O_CREAT, , S_IWUSR | S_IRUSR);
	writePackedMessageToFd(fd, message);
	return 0;
}
