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

  capnp::List<Image::Command>::Builder commands = img.initCommands();

  auto v = commands[0].initValues(10);

  for(int i=0; i < 10; i++){
    v.set(i, .5f * i);
  }

  int fd = open("ceral.dat", O_WRONLY | O_CREAT);
  writePackedMessageToFd(fd, message);
  return 0;
}
