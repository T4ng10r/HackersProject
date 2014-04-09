// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: program.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "program.pb.h"

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

namespace HackersProject {

namespace {

const ::google::protobuf::Descriptor* program_data_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  program_data_reflection_ = NULL;
const ::google::protobuf::Descriptor* program_data_effect_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  program_data_effect_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* program_data_effect_type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* programs_stats_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  programs_stats_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_program_2eproto() {
  protobuf_AddDesc_program_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "program.proto");
  GOOGLE_CHECK(file != NULL);
  program_data_descriptor_ = file->message_type(0);
  static const int program_data_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data, effects_),
  };
  program_data_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      program_data_descriptor_,
      program_data::default_instance_,
      program_data_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(program_data));
  program_data_effect_descriptor_ = program_data_descriptor_->nested_type(0);
  static const int program_data_effect_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data_effect, effect_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data_effect, val_),
  };
  program_data_effect_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      program_data_effect_descriptor_,
      program_data_effect::default_instance_,
      program_data_effect_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data_effect, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(program_data_effect, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(program_data_effect));
  program_data_effect_type_descriptor_ = program_data_descriptor_->enum_type(0);
  programs_stats_descriptor_ = file->message_type(1);
  static const int programs_stats_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(programs_stats, programs_),
  };
  programs_stats_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      programs_stats_descriptor_,
      programs_stats::default_instance_,
      programs_stats_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(programs_stats, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(programs_stats, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(programs_stats));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_program_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    program_data_descriptor_, &program_data::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    program_data_effect_descriptor_, &program_data_effect::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    programs_stats_descriptor_, &programs_stats::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_program_2eproto() {
  delete program_data::default_instance_;
  delete program_data_reflection_;
  delete program_data_effect::default_instance_;
  delete program_data_effect_reflection_;
  delete programs_stats::default_instance_;
  delete programs_stats_reflection_;
}

void protobuf_AddDesc_program_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rprogram.proto\022\016HackersProject\"\361\002\n\014prog"
    "ram_data\022\014\n\004name\030\001 \002(\t\0224\n\007effects\030\003 \003(\0132"
    "#.HackersProject.program_data.effect\032O\n\006"
    "effect\0228\n\006effect\030\001 \002(\0162(.HackersProject."
    "program_data.effect_type\022\013\n\003val\030\002 \002(\005\"\313\001"
    "\n\013effect_type\022\n\n\006attack\020\001\022\013\n\007analyze\020\002\022\t"
    "\n\005armor\020\003\022\t\n\005crypt\020\004\022\n\n\006detect\020\005\022\013\n\007dece"
    "ive\020\006\022\t\n\005decoy\020\007\022\013\n\007decrypt\020\010\022\014\n\010evaluat"
    "e\020\t\022\t\n\005medic\020\n\022\014\n\010relocate\020\013\022\010\n\004scan\020\014\022\n"
    "\n\006shield\020\r\022\010\n\004slow\020\016\022\t\n\005virus\020\017\022\n\n\006weake"
    "n\020\020\"@\n\016programs_stats\022.\n\010programs\030\001 \003(\0132"
    "\034.HackersProject.program_data", 469);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "program.proto", &protobuf_RegisterTypes);
  program_data::default_instance_ = new program_data();
  program_data_effect::default_instance_ = new program_data_effect();
  programs_stats::default_instance_ = new programs_stats();
  program_data::default_instance_->InitAsDefaultInstance();
  program_data_effect::default_instance_->InitAsDefaultInstance();
  programs_stats::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_program_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_program_2eproto {
  StaticDescriptorInitializer_program_2eproto() {
    protobuf_AddDesc_program_2eproto();
  }
} static_descriptor_initializer_program_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* program_data_effect_type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return program_data_effect_type_descriptor_;
}
bool program_data_effect_type_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const program_data_effect_type program_data::attack;
const program_data_effect_type program_data::analyze;
const program_data_effect_type program_data::armor;
const program_data_effect_type program_data::crypt;
const program_data_effect_type program_data::detect;
const program_data_effect_type program_data::deceive;
const program_data_effect_type program_data::decoy;
const program_data_effect_type program_data::decrypt;
const program_data_effect_type program_data::evaluate;
const program_data_effect_type program_data::medic;
const program_data_effect_type program_data::relocate;
const program_data_effect_type program_data::scan;
const program_data_effect_type program_data::shield;
const program_data_effect_type program_data::slow;
const program_data_effect_type program_data::virus;
const program_data_effect_type program_data::weaken;
const program_data_effect_type program_data::effect_type_MIN;
const program_data_effect_type program_data::effect_type_MAX;
const int program_data::effect_type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int program_data_effect::kEffectFieldNumber;
const int program_data_effect::kValFieldNumber;
#endif  // !_MSC_VER

program_data_effect::program_data_effect()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void program_data_effect::InitAsDefaultInstance() {
}

program_data_effect::program_data_effect(const program_data_effect& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void program_data_effect::SharedCtor() {
  _cached_size_ = 0;
  effect_ = 1;
  val_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

program_data_effect::~program_data_effect() {
  SharedDtor();
}

void program_data_effect::SharedDtor() {
  if (this != default_instance_) {
  }
}

void program_data_effect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* program_data_effect::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return program_data_effect_descriptor_;
}

const program_data_effect& program_data_effect::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_program_2eproto();
  return *default_instance_;
}

program_data_effect* program_data_effect::default_instance_ = NULL;

program_data_effect* program_data_effect::New() const {
  return new program_data_effect;
}

void program_data_effect::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    effect_ = 1;
    val_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool program_data_effect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .HackersProject.program_data.effect_type effect = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::HackersProject::program_data_effect_type_IsValid(value)) {
            set_effect(static_cast< ::HackersProject::program_data_effect_type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_val;
        break;
      }

      // required int32 val = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_val:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &val_)));
          set_has_val();
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

void program_data_effect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .HackersProject.program_data.effect_type effect = 1;
  if (has_effect()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->effect(), output);
  }

  // required int32 val = 2;
  if (has_val()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->val(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* program_data_effect::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .HackersProject.program_data.effect_type effect = 1;
  if (has_effect()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->effect(), target);
  }

  // required int32 val = 2;
  if (has_val()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->val(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int program_data_effect::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .HackersProject.program_data.effect_type effect = 1;
    if (has_effect()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->effect());
    }

    // required int32 val = 2;
    if (has_val()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->val());
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

void program_data_effect::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const program_data_effect* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const program_data_effect*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void program_data_effect::MergeFrom(const program_data_effect& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_effect()) {
      set_effect(from.effect());
    }
    if (from.has_val()) {
      set_val(from.val());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void program_data_effect::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void program_data_effect::CopyFrom(const program_data_effect& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool program_data_effect::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void program_data_effect::Swap(program_data_effect* other) {
  if (other != this) {
    std::swap(effect_, other->effect_);
    std::swap(val_, other->val_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata program_data_effect::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = program_data_effect_descriptor_;
  metadata.reflection = program_data_effect_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int program_data::kNameFieldNumber;
const int program_data::kEffectsFieldNumber;
#endif  // !_MSC_VER

program_data::program_data()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void program_data::InitAsDefaultInstance() {
}

program_data::program_data(const program_data& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void program_data::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

program_data::~program_data() {
  SharedDtor();
}

void program_data::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void program_data::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* program_data::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return program_data_descriptor_;
}

const program_data& program_data::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_program_2eproto();
  return *default_instance_;
}

program_data* program_data::default_instance_ = NULL;

program_data* program_data::New() const {
  return new program_data;
}

void program_data::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
  }
  effects_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool program_data::MergePartialFromCodedStream(
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
        if (input->ExpectTag(26)) goto parse_effects;
        break;
      }

      // repeated .HackersProject.program_data.effect effects = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_effects:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_effects()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_effects;
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

void program_data::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // repeated .HackersProject.program_data.effect effects = 3;
  for (int i = 0; i < this->effects_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->effects(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* program_data::SerializeWithCachedSizesToArray(
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

  // repeated .HackersProject.program_data.effect effects = 3;
  for (int i = 0; i < this->effects_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->effects(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int program_data::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

  }
  // repeated .HackersProject.program_data.effect effects = 3;
  total_size += 1 * this->effects_size();
  for (int i = 0; i < this->effects_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->effects(i));
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

void program_data::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const program_data* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const program_data*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void program_data::MergeFrom(const program_data& from) {
  GOOGLE_CHECK_NE(&from, this);
  effects_.MergeFrom(from.effects_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void program_data::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void program_data::CopyFrom(const program_data& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool program_data::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < effects_size(); i++) {
    if (!this->effects(i).IsInitialized()) return false;
  }
  return true;
}

void program_data::Swap(program_data* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    effects_.Swap(&other->effects_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata program_data::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = program_data_descriptor_;
  metadata.reflection = program_data_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int programs_stats::kProgramsFieldNumber;
#endif  // !_MSC_VER

programs_stats::programs_stats()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void programs_stats::InitAsDefaultInstance() {
}

programs_stats::programs_stats(const programs_stats& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void programs_stats::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

programs_stats::~programs_stats() {
  SharedDtor();
}

void programs_stats::SharedDtor() {
  if (this != default_instance_) {
  }
}

void programs_stats::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* programs_stats::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return programs_stats_descriptor_;
}

const programs_stats& programs_stats::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_program_2eproto();
  return *default_instance_;
}

programs_stats* programs_stats::default_instance_ = NULL;

programs_stats* programs_stats::New() const {
  return new programs_stats;
}

void programs_stats::Clear() {
  programs_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool programs_stats::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .HackersProject.program_data programs = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_programs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_programs()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_programs;
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

void programs_stats::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .HackersProject.program_data programs = 1;
  for (int i = 0; i < this->programs_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->programs(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* programs_stats::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .HackersProject.program_data programs = 1;
  for (int i = 0; i < this->programs_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->programs(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int programs_stats::ByteSize() const {
  int total_size = 0;

  // repeated .HackersProject.program_data programs = 1;
  total_size += 1 * this->programs_size();
  for (int i = 0; i < this->programs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->programs(i));
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

void programs_stats::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const programs_stats* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const programs_stats*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void programs_stats::MergeFrom(const programs_stats& from) {
  GOOGLE_CHECK_NE(&from, this);
  programs_.MergeFrom(from.programs_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void programs_stats::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void programs_stats::CopyFrom(const programs_stats& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool programs_stats::IsInitialized() const {

  for (int i = 0; i < programs_size(); i++) {
    if (!this->programs(i).IsInitialized()) return false;
  }
  return true;
}

void programs_stats::Swap(programs_stats* other) {
  if (other != this) {
    programs_.Swap(&other->programs_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata programs_stats::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = programs_stats_descriptor_;
  metadata.reflection = programs_stats_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace HackersProject

// @@protoc_insertion_point(global_scope)
