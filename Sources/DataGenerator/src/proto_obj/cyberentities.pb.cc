// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyberentities.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cyberentities.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Hackers_Project {

namespace {

const ::google::protobuf::Descriptor* cyberentities_data_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  cyberentities_data_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* cyberentities_data_entites_type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_cyberentities_2eproto() {
  protobuf_AddDesc_cyberentities_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cyberentities.proto");
  GOOGLE_CHECK(file != NULL);
  cyberentities_data_descriptor_ = file->message_type(0);
  static const int cyberentities_data_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cyberentities_data, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cyberentities_data, type_),
  };
  cyberentities_data_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      cyberentities_data_descriptor_,
      cyberentities_data::default_instance_,
      cyberentities_data_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cyberentities_data, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cyberentities_data, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(cyberentities_data));
  cyberentities_data_entites_type_descriptor_ = cyberentities_data_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cyberentities_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    cyberentities_data_descriptor_, &cyberentities_data::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cyberentities_2eproto() {
  delete cyberentities_data::default_instance_;
  delete cyberentities_data_reflection_;
}

void protobuf_AddDesc_cyberentities_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023cyberentities.proto\022\017Hackers_Project\"\261"
    "\001\n\022cyberentities_data\022\014\n\004name\030\001 \002(\t\022>\n\004t"
    "ype\030\002 \002(\01620.Hackers_Project.cyberentitie"
    "s_data.entites_type\"M\n\014entites_type\022\n\n\006P"
    "layer\020\001\022\006\n\002AI\020\002\022\014\n\010Firewall\020\003\022\r\n\tTranspo"
    "rt\020\004\022\014\n\010Detector\020\005", 218);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cyberentities.proto", &protobuf_RegisterTypes);
  cyberentities_data::default_instance_ = new cyberentities_data();
  cyberentities_data::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cyberentities_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cyberentities_2eproto {
  StaticDescriptorInitializer_cyberentities_2eproto() {
    protobuf_AddDesc_cyberentities_2eproto();
  }
} static_descriptor_initializer_cyberentities_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* cyberentities_data_entites_type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return cyberentities_data_entites_type_descriptor_;
}
bool cyberentities_data_entites_type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const cyberentities_data_entites_type cyberentities_data::Player;
const cyberentities_data_entites_type cyberentities_data::AI;
const cyberentities_data_entites_type cyberentities_data::Firewall;
const cyberentities_data_entites_type cyberentities_data::Transport;
const cyberentities_data_entites_type cyberentities_data::Detector;
const cyberentities_data_entites_type cyberentities_data::entites_type_MIN;
const cyberentities_data_entites_type cyberentities_data::entites_type_MAX;
const int cyberentities_data::entites_type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int cyberentities_data::kNameFieldNumber;
const int cyberentities_data::kTypeFieldNumber;
#endif  // !_MSC_VER

cyberentities_data::cyberentities_data()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void cyberentities_data::InitAsDefaultInstance() {
}

cyberentities_data::cyberentities_data(const cyberentities_data& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void cyberentities_data::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

cyberentities_data::~cyberentities_data() {
  SharedDtor();
}

void cyberentities_data::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void cyberentities_data::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* cyberentities_data::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return cyberentities_data_descriptor_;
}

const cyberentities_data& cyberentities_data::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cyberentities_2eproto();
  return *default_instance_;
}

cyberentities_data* cyberentities_data::default_instance_ = NULL;

cyberentities_data* cyberentities_data::New() const {
  return new cyberentities_data;
}

void cyberentities_data::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    type_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool cyberentities_data::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }

      // required .Hackers_Project.cyberentities_data.entites_type type = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Hackers_Project::cyberentities_data_entites_type_IsValid(value)) {
            set_type(static_cast< ::Hackers_Project::cyberentities_data_entites_type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void cyberentities_data::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // required .Hackers_Project.cyberentities_data.entites_type type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* cyberentities_data::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required .Hackers_Project.cyberentities_data.entites_type type = 2;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int cyberentities_data::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required .Hackers_Project.cyberentities_data.entites_type type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void cyberentities_data::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const cyberentities_data* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const cyberentities_data*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void cyberentities_data::MergeFrom(const cyberentities_data& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void cyberentities_data::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void cyberentities_data::CopyFrom(const cyberentities_data& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool cyberentities_data::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void cyberentities_data::Swap(cyberentities_data* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata cyberentities_data::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = cyberentities_data_descriptor_;
  metadata.reflection = cyberentities_data_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Hackers_Project

// @@protoc_insertion_point(global_scope)
