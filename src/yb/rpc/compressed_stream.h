// Copyright (c) YugaByte, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except
// in compliance with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied.  See the License for the specific language governing permissions and limitations
// under the License.
//

#ifndef YB_RPC_COMPRESSED_STREAM_H
#define YB_RPC_COMPRESSED_STREAM_H

#include "yb/rpc/stream.h"

#include "yb/util/mem_tracker.h"

namespace yb {
namespace rpc {

const Protocol* CompressedStreamProtocol();
StreamFactoryPtr CompressedStreamFactory(
    StreamFactoryPtr lower_layer_factory, const MemTrackerPtr& buffer_tracker);

}  // namespace rpc
}  // namespace yb

#endif  // YB_RPC_COMPRESSED_STREAM_H
