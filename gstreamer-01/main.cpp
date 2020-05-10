#include <iostream>
#include <gst/gst.h>

int main(int arg, char *argv[]) {
    GstElement *pipeline = nullptr;
    GstBus *bus = nullptr;
    GstMessage *msg = nullptr;

    // gstreamer initialization
    gst_init(&arg, &argv);

    // building pipeline
    pipeline = gst_parse_launch(
            "playbin uri=https://www.freedesktop.org/software/gstreamer-sdk/data/media/sintel_trailer-480p.webm",
            nullptr);

    // start playing
    gst_element_set_state(pipeline, GST_STATE_PLAYING);

    //wait until error or EOS ( End Of Stream )
    

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
