// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: memory.proto

#ifndef PROTOBUF_memory_2eproto__INCLUDED
#define PROTOBUF_memory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Hackers_Project {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_memory_2eproto();
void protobuf_AssignDesc_memory_2eproto();
void protobuf_ShutdownFile_memory_2eproto();

class memory_data;

// ===================================================================

class memory_data : public ::google::protobuf::Message {
 public:
  memory_data();
  virtual ~memory_data();

  memory_data(const memory_data& from);

  inline memory_data& operator=(const memory_data& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const memory_data& default_instance();

  void Swap(memory_data* other);

  // implements Message ----------------------------------------------

  memory_data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const memory_data& from);
  void MergeFrom(const memory_data& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // required uint32 size = 2;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 2;
  inline ::google::protobuf::uint32 size() const;
  inline void set_size(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Hackers_Project.memory_data)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::uint32 size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_memory_2eproto();
  friend void protobuf_AssignDesc_memory_2eproto();
  friend void protobuf_ShutdownFile_memory_2eproto();

  void InitAsDefaultInstance();
  static memory_data* default_instance_;
};
// ===================================================================


// ===================================================================

// memory_data

// required string name = 1;
inline bool memory_data::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void memory_data::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void memory_data::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void memory_data::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& memory_data::name() const {
  return *name_;
}
inline void memory_data::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void memory_data::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void memory_data::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* memory_data::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* memory_data::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void memory_data::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 size = 2;
inline bool memory_data::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void memory_data::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void memory_data::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void memory_data::clear_size() {
  size_ = 0u;
  clear_has_size();
}
inline ::google::protobuf::uint32 memory_data::size() const {
  return size_;
}
inline void memory_data::set_size(::google::protobuf::uint32 value) {
  set_has_size();
  size_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Hackers_Project

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_memory_2eproto__INCLUDED