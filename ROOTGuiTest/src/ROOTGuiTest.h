#include <TQObject.h>
#include <RQ_OBJECT.h>

#include <TGFrame.h>
#include <TRootEmbeddedCanvas.h>

class MyMainFrame {
    RQ_OBJECT("MyMainFrame")
private:
    TGMainFrame         *fMain;
    TRootEmbeddedCanvas *fEcanvas;
public:
    MyMainFrame(const TGWindow *p,UInt_t w,UInt_t h);
    virtual ~MyMainFrame();
    void DoDraw();
};
