// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/event_message.proto

#ifndef PROTOBUF_common_2fevent_5fmessage_2eproto__INCLUDED
#define PROTOBUF_common_2fevent_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_common_2fevent_5fmessage_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsEventMessageImpl();
void InitDefaultsEventMessage();
inline void InitDefaults() {
  InitDefaultsEventMessage();
}
}  // namespace protobuf_common_2fevent_5fmessage_2eproto
namespace com {
namespace test {
namespace dto {
class EventMessage;
class EventMessageDefaultTypeInternal;
extern EventMessageDefaultTypeInternal _EventMessage_default_instance_;
}  // namespace dto
}  // namespace test
}  // namespace com
namespace com {
namespace test {
namespace dto {

// ===================================================================

class EventMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.test.dto.EventMessage) */ {
 public:
  EventMessage();
  virtual ~EventMessage();

  EventMessage(const EventMessage& from);

  inline EventMessage& operator=(const EventMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventMessage(EventMessage&& from) noexcept
    : EventMessage() {
    *this = ::std::move(from);
  }

  inline EventMessage& operator=(EventMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EventMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventMessage* internal_default_instance() {
    return reinterpret_cast<const EventMessage*>(
               &_EventMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(EventMessage* other);
  friend void swap(EventMessage& a, EventMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  EventMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const EventMessage& from);
  void MergeFrom(const EventMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(EventMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string event = 3;
  void clear_event();
  static const int kEventFieldNumber = 3;
  const ::std::string& event() const;
  void set_event(const ::std::string& value);
  #if LANG_CXX11
  void set_event(::std::string&& value);
  #endif
  void set_event(const char* value);
  void set_event(const char* value, size_t size);
  ::std::string* mutable_event();
  ::std::string* release_event();
  void set_allocated_event(::std::string* event);

  // uint64 timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // uint64 user_id = 2;
  void clear_user_id();
  static const int kUserIdFieldNumber = 2;
  ::google::protobuf::uint64 user_id() const;
  void set_user_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:com.test.dto.EventMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr event_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::uint64 user_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_common_2fevent_5fmessage_2eproto::TableStruct;
  friend void ::protobuf_common_2fevent_5fmessage_2eproto::InitDefaultsEventMessageImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EventMessage

// uint64 timestamp = 1;
inline void EventMessage::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventMessage::timestamp() const {
  // @@protoc_insertion_point(field_get:com.test.dto.EventMessage.timestamp)
  return timestamp_;
}
inline void EventMessage::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:com.test.dto.EventMessage.timestamp)
}

// uint64 user_id = 2;
inline void EventMessage::clear_user_id() {
  user_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventMessage::user_id() const {
  // @@protoc_insertion_point(field_get:com.test.dto.EventMessage.user_id)
  return user_id_;
}
inline void EventMessage::set_user_id(::google::protobuf::uint64 value) {
  
  user_id_ = value;
  // @@protoc_insertion_point(field_set:com.test.dto.EventMessage.user_id)
}

// string event = 3;
inline void EventMessage::clear_event() {
  event_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventMessage::event() const {
  // @@protoc_insertion_point(field_get:com.test.dto.EventMessage.event)
  return event_.GetNoArena();
}
inline void EventMessage::set_event(const ::std::string& value) {
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.test.dto.EventMessage.event)
}
#if LANG_CXX11
inline void EventMessage::set_event(::std::string&& value) {
  
  event_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.test.dto.EventMessage.event)
}
#endif
inline void EventMessage::set_event(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.test.dto.EventMessage.event)
}
inline void EventMessage::set_event(const char* value, size_t size) {
  
  event_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.test.dto.EventMessage.event)
}
inline ::std::string* EventMessage::mutable_event() {
  
  // @@protoc_insertion_point(field_mutable:com.test.dto.EventMessage.event)
  return event_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventMessage::release_event() {
  // @@protoc_insertion_point(field_release:com.test.dto.EventMessage.event)
  
  return event_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventMessage::set_allocated_event(::std::string* event) {
  if (event != NULL) {
    
  } else {
    
  }
  event_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), event);
  // @@protoc_insertion_point(field_set_allocated:com.test.dto.EventMessage.event)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dto
}  // namespace test
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_2fevent_5fmessage_2eproto__INCLUDED
