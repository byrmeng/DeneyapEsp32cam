#ifndef WIFICAM_HPP
#define WIFICAM_HPP

#include <DeneyapEsp32cam.h>

#include <WebServer.h>

extern esp32cam::Resolution initialResolution;

extern WebServer server;

void
addRequestHandlers();

#endif // WIFICAM_HPP
