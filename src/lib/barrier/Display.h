#include <Carbon/Carbon.h>
/**
 * Platform-independent display.
 */
class Display {
  public:
    UInt32 displayId;
    SInt32 x;
    SInt32 y;
    SInt32 width;
    SInt32 height;
};
