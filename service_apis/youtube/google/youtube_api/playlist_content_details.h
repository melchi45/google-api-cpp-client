// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2015-03-26 20:30:19 UTC
//   on: 2015-06-02, 17:00:10 UTC
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 139
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_PLAYLIST_CONTENT_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_PLAYLIST_CONTENT_DETAILS_H_

#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class PlaylistContentDetails : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PlaylistContentDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistContentDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistContentDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PlaylistContentDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::PlaylistContentDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::PlaylistContentDetails");
  }

  /**
   * Determine if the '<code>itemCount</code>' attribute was set.
   *
   * @return true if the '<code>itemCount</code>' attribute was set.
   */
  bool has_item_count() const {
    return Storage().isMember("itemCount");
  }

  /**
   * Clears the '<code>itemCount</code>' attribute.
   */
  void clear_item_count() {
    MutableStorage()->removeMember("itemCount");
  }


  /**
   * Get the value of the '<code>itemCount</code>' attribute.
   */
  uint32 get_item_count() const {
    const Json::Value& storage = Storage("itemCount");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>itemCount</code>' attribute.
   *
   * The number of videos in the playlist.
   *
   * @param[in] value The new value.
   */
  void set_item_count(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("itemCount"));
  }

 private:
  void operator=(const PlaylistContentDetails&);
};  // PlaylistContentDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_PLAYLIST_CONTENT_DETAILS_H_
