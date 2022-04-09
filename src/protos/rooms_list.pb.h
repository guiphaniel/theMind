// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rooms_list.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_rooms_5flist_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_rooms_5flist_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "room.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_rooms_5flist_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_rooms_5flist_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_rooms_5flist_2eproto;
namespace protos {
class RoomsListProto;
struct RoomsListProtoDefaultTypeInternal;
extern RoomsListProtoDefaultTypeInternal _RoomsListProto_default_instance_;
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> ::protos::RoomsListProto* Arena::CreateMaybeMessage<::protos::RoomsListProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protos {

// ===================================================================

class RoomsListProto final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protos.RoomsListProto) */ {
 public:
  inline RoomsListProto() : RoomsListProto(nullptr) {}
  ~RoomsListProto() override;
  explicit PROTOBUF_CONSTEXPR RoomsListProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  RoomsListProto(const RoomsListProto& from);
  RoomsListProto(RoomsListProto&& from) noexcept
    : RoomsListProto() {
    *this = ::std::move(from);
  }

  inline RoomsListProto& operator=(const RoomsListProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline RoomsListProto& operator=(RoomsListProto&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RoomsListProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const RoomsListProto* internal_default_instance() {
    return reinterpret_cast<const RoomsListProto*>(
               &_RoomsListProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RoomsListProto& a, RoomsListProto& b) {
    a.Swap(&b);
  }
  inline void Swap(RoomsListProto* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RoomsListProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RoomsListProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RoomsListProto>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const RoomsListProto& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const RoomsListProto& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RoomsListProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protos.RoomsListProto";
  }
  protected:
  explicit RoomsListProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoomFieldNumber = 1,
  };
  // repeated .protos.RoomProto room = 1;
  int room_size() const;
  private:
  int _internal_room_size() const;
  public:
  void clear_room();
  ::protos::RoomProto* mutable_room(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protos::RoomProto >*
      mutable_room();
  private:
  const ::protos::RoomProto& _internal_room(int index) const;
  ::protos::RoomProto* _internal_add_room();
  public:
  const ::protos::RoomProto& room(int index) const;
  ::protos::RoomProto* add_room();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protos::RoomProto >&
      room() const;

  // @@protoc_insertion_point(class_scope:protos.RoomsListProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protos::RoomProto > room_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rooms_5flist_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RoomsListProto

// repeated .protos.RoomProto room = 1;
inline int RoomsListProto::_internal_room_size() const {
  return _impl_.room_.size();
}
inline int RoomsListProto::room_size() const {
  return _internal_room_size();
}
inline ::protos::RoomProto* RoomsListProto::mutable_room(int index) {
  // @@protoc_insertion_point(field_mutable:protos.RoomsListProto.room)
  return _impl_.room_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protos::RoomProto >*
RoomsListProto::mutable_room() {
  // @@protoc_insertion_point(field_mutable_list:protos.RoomsListProto.room)
  return &_impl_.room_;
}
inline const ::protos::RoomProto& RoomsListProto::_internal_room(int index) const {
  return _impl_.room_.Get(index);
}
inline const ::protos::RoomProto& RoomsListProto::room(int index) const {
  // @@protoc_insertion_point(field_get:protos.RoomsListProto.room)
  return _internal_room(index);
}
inline ::protos::RoomProto* RoomsListProto::_internal_add_room() {
  return _impl_.room_.Add();
}
inline ::protos::RoomProto* RoomsListProto::add_room() {
  ::protos::RoomProto* _add = _internal_add_room();
  // @@protoc_insertion_point(field_add:protos.RoomsListProto.room)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::protos::RoomProto >&
RoomsListProto::room() const {
  // @@protoc_insertion_point(field_list:protos.RoomsListProto.room)
  return _impl_.room_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_rooms_5flist_2eproto
