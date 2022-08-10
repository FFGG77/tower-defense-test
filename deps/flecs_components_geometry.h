// Comment out this line when using as DLL
#define flecs_components_geometry_STATIC
#ifndef FLECS_COMPONENTS_GEOMETRY_H
#define FLECS_COMPONENTS_GEOMETRY_H

/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_COMPONENTS_GEOMETRY_BAKE_CONFIG_H
#define FLECS_COMPONENTS_GEOMETRY_BAKE_CONFIG_H

/* Headers of public dependencies */
#include "flecs.h"
#include "flecs_components_graphics.h"

/* Convenience macro for exporting symbols */
#ifndef flecs_components_geometry_STATIC
#if defined(flecs_components_geometry_EXPORTS) && (defined(_MSC_VER) || defined(__MINGW32__))
  #define FLECS_COMPONENTS_GEOMETRY_API __declspec(dllexport)
#elif defined(flecs_components_geometry_EXPORTS)
  #define FLECS_COMPONENTS_GEOMETRY_API __attribute__((__visibility__("default")))
#elif defined(_MSC_VER)
  #define FLECS_COMPONENTS_GEOMETRY_API __declspec(dllimport)
#else
  #define FLECS_COMPONENTS_GEOMETRY_API
#endif
#else
  #define FLECS_COMPONENTS_GEOMETRY_API
#endif

#endif



// Reflection system boilerplate
#undef ECS_META_IMPL
#ifndef FLECS_COMPONENTS_GEOMETRY_IMPL
#define ECS_META_IMPL EXTERN // Ensure meta symbols are only defined once
#endif

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsLine2, {
    vec3 start;
    vec3 stop;
});

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsLine3, {
    vec3 start;
    vec3 stop;
});

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsRectangle, {
    float width;
    float height;
});

typedef EcsRectangle ecs_rect_t;

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsSquare, {
    float size;
});

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsCircle, {
    float radius;
});

FLECS_COMPONENTS_GEOMETRY_API
ECS_STRUCT(EcsBox, {
    float width;
    float height;
    float depth;
});

extern ECS_DECLARE(EcsStaticGeometry);

// Not yet supported
typedef struct EcsMesh {
    vec3 *vertices;
    int32_t vertex_count;
} EcsMesh;

#ifdef __cplusplus
extern "C" {
#endif

FLECS_COMPONENTS_GEOMETRY_API
void FlecsComponentsGeometryImport(
    ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#ifndef FLECS_NO_CPP

namespace flecs {
namespace components {

class geometry {
public:
    using Line2 = EcsLine2;
    using Line3 = EcsLine3;
    using Rectangle = EcsRectangle;
    using Square = EcsSquare;
    using Circle = EcsCircle;
    using Box = EcsBox;

    geometry(flecs::world& ecs) {
        // Load module contents
        FlecsComponentsGeometryImport(ecs);

        // Bind C++ types with module contents
        ecs.module<flecs::components::geometry>();
        ecs.component<Line2>();
        ecs.component<Line3>();
        ecs.component<Rectangle>();
        ecs.component<Square>();
        ecs.component<Circle>();
        ecs.component<Box>();
    }
};

}
}
#endif
#endif

#endif
