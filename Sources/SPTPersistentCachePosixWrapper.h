/*
 * Copyright (c) 2016 Spotify AB.
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#import <Foundation/Foundation.h>

/**
 * An Obj-C wrapper for POSIX functions mainly made for mocking functions during unit tests.
 */
@interface SPTPersistentCachePosixWrapper : NSObject

/**
 * See POSIX "close"
 * @param descriptor The file descriptor to close.
 */
- (int)close:(int)descriptor;
/**
 * See POSIX "read"
 * @param descriptor The file descriptor to read.
 * @param buffer The memory to read into.
 * @param bufferSize The amount of the file to read into memory.
 */
- (ssize_t)read:(int)descriptor buffer:(void *)buffer bufferSize:(size_t)bufferSize;

@end
