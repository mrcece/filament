/*
 * Copyright (C) 2025 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_FILAMENT_BACKEND_WEBGPUBUFFEROBJECT_H
#define TNT_FILAMENT_BACKEND_WEBGPUBUFFEROBJECT_H

#include "WebGPUBufferBase.h"

#include "DriverBase.h"

#include <cstdint>

namespace wgpu {
class Device;
}

namespace filament::backend {

enum class BufferObjectBinding : uint8_t;

class WebGPUBufferObject final : public HwBufferObject, public WebGPUBufferBase {
public:
    WebGPUBufferObject(wgpu::Device const&, BufferObjectBinding, uint32_t byteCount);
};

} // namespace filament::backend

#endif // TNT_FILAMENT_BACKEND_WEBGPUBUFFEROBJECT_H
