// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: player.proto

#include "player.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace protos {
PROTOBUF_CONSTEXPR PlayerProto::PlayerProto(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.pseudo_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.id_)*/0} {}
struct PlayerProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PlayerProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PlayerProtoDefaultTypeInternal() {}
  union {
    PlayerProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PlayerProtoDefaultTypeInternal _PlayerProto_default_instance_;
}  // namespace protos
static ::_pb::Metadata file_level_metadata_player_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_player_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_player_2eproto = nullptr;

const uint32_t TableStruct_player_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protos::PlayerProto, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::protos::PlayerProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::protos::PlayerProto, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::protos::PlayerProto, _impl_.pseudo_),
  1,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::protos::PlayerProto)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::protos::_PlayerProto_default_instance_._instance,
};

const char descriptor_table_protodef_player_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014player.proto\022\006protos\")\n\013PlayerProto\022\n\n"
  "\002id\030\001 \002(\005\022\016\n\006pseudo\030\002 \001(\t"
  ;
static ::_pbi::once_flag descriptor_table_player_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_player_2eproto = {
    false, false, 65, descriptor_table_protodef_player_2eproto,
    "player.proto",
    &descriptor_table_player_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_player_2eproto::offsets,
    file_level_metadata_player_2eproto, file_level_enum_descriptors_player_2eproto,
    file_level_service_descriptors_player_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_player_2eproto_getter() {
  return &descriptor_table_player_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_player_2eproto(&descriptor_table_player_2eproto);
namespace protos {

// ===================================================================

class PlayerProto::_Internal {
 public:
  using HasBits = decltype(std::declval<PlayerProto>()._impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_pseudo(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000002) ^ 0x00000002) != 0;
  }
};

PlayerProto::PlayerProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:protos.PlayerProto)
}
PlayerProto::PlayerProto(const PlayerProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.pseudo_){}
    , decltype(_impl_.id_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.pseudo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pseudo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_pseudo()) {
    _impl_.pseudo_.Set(from._internal_pseudo(), 
      GetArenaForAllocation());
  }
  _impl_.id_ = from._impl_.id_;
  // @@protoc_insertion_point(copy_constructor:protos.PlayerProto)
}

inline void PlayerProto::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.pseudo_){}
    , decltype(_impl_.id_){0}
  };
  _impl_.pseudo_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.pseudo_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PlayerProto::~PlayerProto() {
  // @@protoc_insertion_point(destructor:protos.PlayerProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PlayerProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.pseudo_.Destroy();
}

void PlayerProto::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PlayerProto::Clear() {
// @@protoc_insertion_point(message_clear_start:protos.PlayerProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.pseudo_.ClearNonDefaultToEmpty();
  }
  _impl_.id_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PlayerProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string pseudo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_pseudo();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "protos.PlayerProto.pseudo");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* PlayerProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protos.PlayerProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int32 id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // optional string pseudo = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_pseudo().data(), static_cast<int>(this->_internal_pseudo().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "protos.PlayerProto.pseudo");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_pseudo(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protos.PlayerProto)
  return target;
}

size_t PlayerProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protos.PlayerProto)
  size_t total_size = 0;

  // required int32 id = 1;
  if (_internal_has_id()) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string pseudo = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_pseudo());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PlayerProto::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PlayerProto::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PlayerProto::GetClassData() const { return &_class_data_; }

void PlayerProto::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PlayerProto *>(to)->MergeFrom(
      static_cast<const PlayerProto &>(from));
}


void PlayerProto::MergeFrom(const PlayerProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protos.PlayerProto)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_pseudo(from._internal_pseudo());
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.id_ = from._impl_.id_;
    }
    _impl_._has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PlayerProto::CopyFrom(const PlayerProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protos.PlayerProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerProto::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void PlayerProto::InternalSwap(PlayerProto* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.pseudo_, lhs_arena,
      &other->_impl_.pseudo_, rhs_arena
  );
  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PlayerProto::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_player_2eproto_getter, &descriptor_table_player_2eproto_once,
      file_level_metadata_player_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protos::PlayerProto*
Arena::CreateMaybeMessage< ::protos::PlayerProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protos::PlayerProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
