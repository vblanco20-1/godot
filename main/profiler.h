#pragma once

#define RMT_USE_OPENGL 1

#include "Remotery.h"

bool profilertest();

extern Remotery* g_Remotery;

#define SCOPE_PROFILEI(group, name, color) //MICROPROFILE_SCOPEI(group, name, color)
#define SCOPE_PROFILE(name) rmt_ScopedCPUSample(name, 0)
#define SCOPE_PROFILE_GPU(name) rmt_ScopedCPUSample(name, 0) //rmt_ScopedOpenGLSample(name)
#define PROFILER_INIT() g_Remotery = nullptr; rmt_CreateGlobalInstance(&g_Remotery);//rmt_BindOpenGL();
#define PROFILER_SHUTDOWN() rmt_DestroyGlobalInstance(g_Remotery);
#define PROFILER_FLIP()

