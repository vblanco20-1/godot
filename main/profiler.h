#pragma once

#define RMT_USE_OPENGL 1

#include "thirdparty/tracy/Tracy.hpp"

bool profilertest();

#define SCOPE_PROFILEI(group, name, color) //MICROPROFILE_SCOPEI(group, name, color)
#define SCOPE_PROFILE(name) ZoneScopedN(#name) //rmt_ScopedCPUSample(name, 0)
#define AUTO_PROFILE ZoneScoped
#define SCOPE_PROFILE_GPU(name) ZoneScoped //rmt_ScopedOpenGLSample(name)
#define PROFILER_INIT() //g_Remotery = nullptr; rmt_CreateGlobalInstance(&g_Remotery);//rmt_BindOpenGL();
#define PROFILER_SHUTDOWN() //rmt_DestroyGlobalInstance(g_Remotery);
//#define PROFILER_FLIP() FrameMark
#define PROFILER_STARTFRAME(name) FrameMarkStart(name)
#define PROFILER_ENDFRAME(name) FrameMarkEnd(name)
