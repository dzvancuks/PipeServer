// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Object.proto

#include "stdafx.h"
#include "Object.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class ObjectDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Object>
      _instance;
} _Object_default_instance_;
namespace protobuf_Object_2eproto {
static void InitDefaultsObject() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Object_default_instance_;
    new (ptr) ::Object();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Object::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Object =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsObject}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Object.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Object, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Object, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Object, data_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Object)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_Object_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Object.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014Object.proto\"$\n\006Object\022\014\n\004name\030\001 \001(\t\022\014"
      "\n\004data\030\002 \001(\014b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 60);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Object.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Object_2eproto

// ===================================================================

void Object::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Object::kNameFieldNumber;
const int Object::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Object::Object()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Object_2eproto::scc_info_Object.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Object)
}
Object::Object(const Object& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  // @@protoc_insertion_point(copy_constructor:Object)
}

void Object::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Object::~Object() {
  // @@protoc_insertion_point(destructor:Object)
  SharedDtor();
}

void Object::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Object::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Object::descriptor() {
  ::protobuf_Object_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Object_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Object& Object::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Object_2eproto::scc_info_Object.base);
  return *internal_default_instance();
}


void Object::Clear() {
// @@protoc_insertion_point(message_clear_start:Object)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Object::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Object)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Object.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes data = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Object)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Object)
  return false;
#undef DO_
}

void Object::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Object)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Object.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->data(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Object)
}

::google::protobuf::uint8* Object::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Object)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Object.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->data(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Object)
  return target;
}

size_t Object::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Object)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // bytes data = 2;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Object::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Object)
  GOOGLE_DCHECK_NE(&from, this);
  const Object* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Object>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Object)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Object)
    MergeFrom(*source);
  }
}

void Object::MergeFrom(const Object& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Object)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.data().size() > 0) {

    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
}

void Object::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Object)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Object::CopyFrom(const Object& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Object)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Object::IsInitialized() const {
  return true;
}

void Object::Swap(Object* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Object::InternalSwap(Object* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_.Swap(&other->data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Object::GetMetadata() const {
  protobuf_Object_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Object_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Object* Arena::CreateMaybeMessage< ::Object >(Arena* arena) {
  return Arena::CreateInternal< ::Object >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
