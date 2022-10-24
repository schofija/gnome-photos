/*
 * Photos - access, organize and share your photos on GNOME
 * Copyright © 2015 – 2021 Red Hat, Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PHOTOS_OPERATION_INSTA_FILTER_H
#define PHOTOS_OPERATION_INSTA_FILTER_H

#include <gegl-plugin.h>

G_BEGIN_DECLS

#define PHOTOS_TYPE_OPERATION_INSTA_FILTER (photos_operation_insta_filter_get_type ())
G_DECLARE_FINAL_TYPE (PhotosOperationInstaFilter,
                      photos_operation_insta_filter,
                      PHOTOS,
                      OPERATION_INSTA_FILTER,
                      GeglOperationMeta);

G_END_DECLS

#endif /* PHOTOS_OPERATION_INSTA_FILTER_H */
