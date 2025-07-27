//
// Copyright (C) Wojciech Jarosz. All rights reserved.
// Use of this source code is governed by a BSD-style license that can
// be found in the LICENSE.txt file.
//

#pragma once

#include "common.h"
#include "json.h"

json exif_to_json(const uint8_t *data_ptr, size_t data_size);