#ifndef __GTHREE_LIGHT_SHADOW_H__
#define __GTHREE_LIGHT_SHADOW_H__

#if !defined (__GTHREE_H_INSIDE__) && !defined (GTHREE_COMPILATION)
#error "Only <gthree/gthree.h> can be included directly."
#endif

#include <graphene.h>

#include <gdk/gdk.h>
#include <gthree/gthreeobject.h>
#include <json-glib/json-glib.h>

G_BEGIN_DECLS


#define GTHREE_TYPE_LIGHT_SHADOW      (gthree_light_shadow_get_type ())
#define GTHREE_LIGHT_SHADOW(inst)     (G_TYPE_CHECK_INSTANCE_CAST ((inst), \
                                                               GTHREE_TYPE_LIGHT_SHADOW, \
                                                               GthreeLightShadow))
#define GTHREE_IS_LIGHT_SHADOW(inst)  (G_TYPE_CHECK_INSTANCE_TYPE ((inst),    \
                                                               GTHREE_TYPE_LIGHT_SHADOW))

struct _GthreeLightShadow {
  GObject parent;
};

G_DEFINE_AUTOPTR_CLEANUP_FUNC (GthreeLightShadow, g_object_unref)

typedef struct {
  GObjectClass parent_class;

} GthreeLightShadowClass;

GTHREE_API
GType gthree_light_shadow_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* __GTHREE_LIGHT_SHADOW_H__ */