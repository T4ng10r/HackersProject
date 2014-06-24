// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cybermatrix.proto

#ifndef PROTOBUF_cybermatrix_2eproto__INCLUDED
#define PROTOBUF_cybermatrix_2eproto__INCLUDED

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
namespace matrix {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cybermatrix_2eproto();
void protobuf_AssignDesc_cybermatrix_2eproto();
void protobuf_ShutdownFile_cybermatrix_2eproto();

class pos_data;
class entity_data;
class cybermatrix_data;

// ===================================================================

class pos_data : public ::google::protobuf::Message {
 public:
  pos_data();
  virtual ~pos_data();

  pos_data(const pos_data& from);

  inline pos_data& operator=(const pos_data& from) {
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
  static const pos_data& default_instance();

  void Swap(pos_data* other);

  // implements Message ----------------------------------------------

  pos_data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const pos_data& from);
  void MergeFrom(const pos_data& from);
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

  // required int32 x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // required int32 y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Hackers_Project.matrix.pos_data)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cybermatrix_2eproto();
  friend void protobuf_AssignDesc_cybermatrix_2eproto();
  friend void protobuf_ShutdownFile_cybermatrix_2eproto();

  void InitAsDefaultInstance();
  static pos_data* default_instance_;
};
// -------------------------------------------------------------------

class entity_data : public ::google::protobuf::Message {
 public:
  entity_data();
  virtual ~entity_data();

  entity_data(const entity_data& from);

  inline entity_data& operator=(const entity_data& from) {
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
  static const entity_data& default_instance();

  void Swap(entity_data* other);

  // implements Message ----------------------------------------------

  entity_data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const entity_data& from);
  void MergeFrom(const entity_data& from);
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

  // required .Hackers_Project.matrix.pos_data pos = 2;
  inline bool has_pos() const;
  inline void clear_pos();
  static const int kPosFieldNumber = 2;
  inline const ::Hackers_Project::matrix::pos_data& pos() const;
  inline ::Hackers_Project::matrix::pos_data* mutable_pos();
  inline ::Hackers_Project::matrix::pos_data* release_pos();
  inline void set_allocated_pos(::Hackers_Project::matrix::pos_data* pos);

  // required .Hackers_Project.matrix.pos_data size = 3;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 3;
  inline const ::Hackers_Project::matrix::pos_data& size() const;
  inline ::Hackers_Project::matrix::pos_data* mutable_size();
  inline ::Hackers_Project::matrix::pos_data* release_size();
  inline void set_allocated_size(::Hackers_Project::matrix::pos_data* size);

  // @@protoc_insertion_point(class_scope:Hackers_Project.matrix.entity_data)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_pos();
  inline void clear_has_pos();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::Hackers_Project::matrix::pos_data* pos_;
  ::Hackers_Project::matrix::pos_data* size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_cybermatrix_2eproto();
  friend void protobuf_AssignDesc_cybermatrix_2eproto();
  friend void protobuf_ShutdownFile_cybermatrix_2eproto();

  void InitAsDefaultInstance();
  static entity_data* default_instance_;
};
// -------------------------------------------------------------------

class cybermatrix_data : public ::google::protobuf::Message {
 public:
  cybermatrix_data();
  virtual ~cybermatrix_data();

  cybermatrix_data(const cybermatrix_data& from);

  inline cybermatrix_data& operator=(const cybermatrix_data& from) {
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
  static const cybermatrix_data& default_instance();

  void Swap(cybermatrix_data* other);

  // implements Message ----------------------------------------------

  cybermatrix_data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const cybermatrix_data& from);
  void MergeFrom(const cybermatrix_data& from);
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

  // required .Hackers_Project.matrix.pos_data size = 2;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 2;
  inline const ::Hackers_Project::matrix::pos_data& size() const;
  inline ::Hackers_Project::matrix::pos_data* mutable_size();
  inline ::Hackers_Project::matrix::pos_data* release_size();
  inline void set_allocated_size(::Hackers_Project::matrix::pos_data* size);

  // @@protoc_insertion_point(class_scope:Hackers_Project.matrix.cybermatrix_data)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::Hackers_Project::matrix::pos_data* size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_cybermatrix_2eproto();
  friend void protobuf_AssignDesc_cybermatrix_2eproto();
  friend void protobuf_ShutdownFile_cybermatrix_2eproto();

  void InitAsDefaultInstance();
  static cybermatrix_data* default_instance_;
};
// ===================================================================


// ===================================================================

// pos_data

// required int32 x = 1;
inline bool pos_data::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pos_data::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void pos_data::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void pos_data::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 pos_data::x() const {
  return x_;
}
inline void pos_data::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// required int32 y = 2;
inline bool pos_data::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void pos_data::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void pos_data::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void pos_data::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 pos_data::y() const {
  return y_;
}
inline void pos_data::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// -------------------------------------------------------------------

// entity_data

// required string name = 1;
inline bool entity_data::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void entity_data::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void entity_data::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void entity_data::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& entity_data::name() const {
  return *name_;
}
inline void entity_data::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void entity_data::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void entity_data::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* entity_data::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* entity_data::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void entity_data::set_allocated_name(::std::string* name) {
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

// required .Hackers_Project.matrix.pos_data pos = 2;
inline bool entity_data::has_pos() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void entity_data::set_has_pos() {
  _has_bits_[0] |= 0x00000002u;
}
inline void entity_data::clear_has_pos() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void entity_data::clear_pos() {
  if (pos_ != NULL) pos_->::Hackers_Project::matrix::pos_data::Clear();
  clear_has_pos();
}
inline const ::Hackers_Project::matrix::pos_data& entity_data::pos() const {
  return pos_ != NULL ? *pos_ : *default_instance_->pos_;
}
inline ::Hackers_Project::matrix::pos_data* entity_data::mutable_pos() {
  set_has_pos();
  if (pos_ == NULL) pos_ = new ::Hackers_Project::matrix::pos_data;
  return pos_;
}
inline ::Hackers_Project::matrix::pos_data* entity_data::release_pos() {
  clear_has_pos();
  ::Hackers_Project::matrix::pos_data* temp = pos_;
  pos_ = NULL;
  return temp;
}
inline void entity_data::set_allocated_pos(::Hackers_Project::matrix::pos_data* pos) {
  delete pos_;
  pos_ = pos;
  if (pos) {
    set_has_pos();
  } else {
    clear_has_pos();
  }
}

// required .Hackers_Project.matrix.pos_data size = 3;
inline bool entity_data::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void entity_data::set_has_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void entity_data::clear_has_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void entity_data::clear_size() {
  if (size_ != NULL) size_->::Hackers_Project::matrix::pos_data::Clear();
  clear_has_size();
}
inline const ::Hackers_Project::matrix::pos_data& entity_data::size() const {
  return size_ != NULL ? *size_ : *default_instance_->size_;
}
inline ::Hackers_Project::matrix::pos_data* entity_data::mutable_size() {
  set_has_size();
  if (size_ == NULL) size_ = new ::Hackers_Project::matrix::pos_data;
  return size_;
}
inline ::Hackers_Project::matrix::pos_data* entity_data::release_size() {
  clear_has_size();
  ::Hackers_Project::matrix::pos_data* temp = size_;
  size_ = NULL;
  return temp;
}
inline void entity_data::set_allocated_size(::Hackers_Project::matrix::pos_data* size) {
  delete size_;
  size_ = size;
  if (size) {
    set_has_size();
  } else {
    clear_has_size();
  }
}

// -------------------------------------------------------------------

// cybermatrix_data

// required string name = 1;
inline bool cybermatrix_data::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void cybermatrix_data::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void cybermatrix_data::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void cybermatrix_data::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& cybermatrix_data::name() const {
  return *name_;
}
inline void cybermatrix_data::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void cybermatrix_data::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void cybermatrix_data::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* cybermatrix_data::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* cybermatrix_data::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void cybermatrix_data::set_allocated_name(::std::string* name) {
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

// required .Hackers_Project.matrix.pos_data size = 2;
inline bool cybermatrix_data::has_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void cybermatrix_data::set_has_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void cybermatrix_data::clear_has_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void cybermatrix_data::clear_size() {
  if (size_ != NULL) size_->::Hackers_Project::matrix::pos_data::Clear();
  clear_has_size();
}
inline const ::Hackers_Project::matrix::pos_data& cybermatrix_data::size() const {
  return size_ != NULL ? *size_ : *default_instance_->size_;
}
inline ::Hackers_Project::matrix::pos_data* cybermatrix_data::mutable_size() {
  set_has_size();
  if (size_ == NULL) size_ = new ::Hackers_Project::matrix::pos_data;
  return size_;
}
inline ::Hackers_Project::matrix::pos_data* cybermatrix_data::release_size() {
  clear_has_size();
  ::Hackers_Project::matrix::pos_data* temp = size_;
  size_ = NULL;
  return temp;
}
inline void cybermatrix_data::set_allocated_size(::Hackers_Project::matrix::pos_data* size) {
  delete size_;
  size_ = size;
  if (size) {
    set_has_size();
  } else {
    clear_has_size();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace matrix
}  // namespace Hackers_Project

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cybermatrix_2eproto__INCLUDED
