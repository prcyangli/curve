/*
 * Project: curve
 * Created Date: Saturday October 13th 2018
 * Author: hzsunjianliang
 * Copyright (c) 2018 netease
 */

#ifndef SRC_NAMESERVER2_CHUNK_ID_GENERATOR_H_
#define SRC_NAMESERVER2_CHUNK_ID_GENERATOR_H_

#include "src/nameserver2/define.h"

namespace curve {
namespace  mds {

class ChunkIDGenerator {
 public:
    virtual  ~ChunkIDGenerator() {}
    virtual bool GenChunkID(ChunkID *id) = 0;
};

}  // namespace mds
}  // namespace curve
#endif  // SRC_NAMESERVER2_CHUNK_ID_GENERATOR_H_
