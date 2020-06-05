// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CLIENT_GET_LOGIN_LIST.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CLIENT_GET_LOGIN_LIST.pb.h"

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

namespace com_protocol {

namespace {

const ::google::protobuf::Descriptor* ClientGetLoginListReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientGetLoginListReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginServerInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginServerInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClientGetLoginListRsp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientGetLoginListRsp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto() {
  protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CLIENT_GET_LOGIN_LIST.proto");
  GOOGLE_CHECK(file != NULL);
  ClientGetLoginListReq_descriptor_ = file->message_type(0);
  static const int ClientGetLoginListReq_offsets_[1] = {
  };
  ClientGetLoginListReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientGetLoginListReq_descriptor_,
      ClientGetLoginListReq::default_instance_,
      ClientGetLoginListReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientGetLoginListReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientGetLoginListReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientGetLoginListReq));
  LoginServerInfo_descriptor_ = file->message_type(1);
  static const int LoginServerInfo_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, game_service_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, business_service_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, current_persons_),
  };
  LoginServerInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginServerInfo_descriptor_,
      LoginServerInfo::default_instance_,
      LoginServerInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginServerInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginServerInfo));
  ClientGetLoginListRsp_descriptor_ = file->message_type(2);
  static const int ClientGetLoginListRsp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientGetLoginListRsp, login_info_list_),
  };
  ClientGetLoginListRsp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientGetLoginListRsp_descriptor_,
      ClientGetLoginListRsp::default_instance_,
      ClientGetLoginListRsp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientGetLoginListRsp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientGetLoginListRsp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientGetLoginListRsp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientGetLoginListReq_descriptor_, &ClientGetLoginListReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginServerInfo_descriptor_, &LoginServerInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientGetLoginListRsp_descriptor_, &ClientGetLoginListRsp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto() {
  delete ClientGetLoginListReq::default_instance_;
  delete ClientGetLoginListReq_reflection_;
  delete LoginServerInfo::default_instance_;
  delete LoginServerInfo_reflection_;
  delete ClientGetLoginListRsp::default_instance_;
  delete ClientGetLoginListRsp_reflection_;
}

void protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033CLIENT_GET_LOGIN_LIST.proto\022\014com_proto"
    "col\"\027\n\025ClientGetLoginListReq\"z\n\017LoginSer"
    "verInfo\022\n\n\002ip\030\001 \002(\r\022\014\n\004port\030\002 \002(\r\022\027\n\017gam"
    "e_service_id\030\003 \001(\r\022\033\n\023business_service_i"
    "d\030\004 \001(\r\022\027\n\017current_persons\030\005 \002(\r\"O\n\025Clie"
    "ntGetLoginListRsp\0226\n\017login_info_list\030\001 \003"
    "(\0132\035.com_protocol.LoginServerInfo", 273);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CLIENT_GET_LOGIN_LIST.proto", &protobuf_RegisterTypes);
  ClientGetLoginListReq::default_instance_ = new ClientGetLoginListReq();
  LoginServerInfo::default_instance_ = new LoginServerInfo();
  ClientGetLoginListRsp::default_instance_ = new ClientGetLoginListRsp();
  ClientGetLoginListReq::default_instance_->InitAsDefaultInstance();
  LoginServerInfo::default_instance_->InitAsDefaultInstance();
  ClientGetLoginListRsp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto {
  StaticDescriptorInitializer_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto() {
    protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  }
} static_descriptor_initializer_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

ClientGetLoginListReq::ClientGetLoginListReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientGetLoginListReq::InitAsDefaultInstance() {
}

ClientGetLoginListReq::ClientGetLoginListReq(const ClientGetLoginListReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientGetLoginListReq::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientGetLoginListReq::~ClientGetLoginListReq() {
  SharedDtor();
}

void ClientGetLoginListReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ClientGetLoginListReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientGetLoginListReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientGetLoginListReq_descriptor_;
}

const ClientGetLoginListReq& ClientGetLoginListReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  return *default_instance_;
}

ClientGetLoginListReq* ClientGetLoginListReq::default_instance_ = NULL;

ClientGetLoginListReq* ClientGetLoginListReq::New() const {
  return new ClientGetLoginListReq;
}

void ClientGetLoginListReq::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientGetLoginListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void ClientGetLoginListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientGetLoginListReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientGetLoginListReq::ByteSize() const {
  int total_size = 0;

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

void ClientGetLoginListReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientGetLoginListReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientGetLoginListReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientGetLoginListReq::MergeFrom(const ClientGetLoginListReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientGetLoginListReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientGetLoginListReq::CopyFrom(const ClientGetLoginListReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientGetLoginListReq::IsInitialized() const {

  return true;
}

void ClientGetLoginListReq::Swap(ClientGetLoginListReq* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientGetLoginListReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientGetLoginListReq_descriptor_;
  metadata.reflection = ClientGetLoginListReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginServerInfo::kIpFieldNumber;
const int LoginServerInfo::kPortFieldNumber;
const int LoginServerInfo::kGameServiceIdFieldNumber;
const int LoginServerInfo::kBusinessServiceIdFieldNumber;
const int LoginServerInfo::kCurrentPersonsFieldNumber;
#endif  // !_MSC_VER

LoginServerInfo::LoginServerInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginServerInfo::InitAsDefaultInstance() {
}

LoginServerInfo::LoginServerInfo(const LoginServerInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginServerInfo::SharedCtor() {
  _cached_size_ = 0;
  ip_ = 0u;
  port_ = 0u;
  game_service_id_ = 0u;
  business_service_id_ = 0u;
  current_persons_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginServerInfo::~LoginServerInfo() {
  SharedDtor();
}

void LoginServerInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginServerInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginServerInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginServerInfo_descriptor_;
}

const LoginServerInfo& LoginServerInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  return *default_instance_;
}

LoginServerInfo* LoginServerInfo::default_instance_ = NULL;

LoginServerInfo* LoginServerInfo::New() const {
  return new LoginServerInfo;
}

void LoginServerInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ip_ = 0u;
    port_ = 0u;
    game_service_id_ = 0u;
    business_service_id_ = 0u;
    current_persons_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginServerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 ip = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ip_)));
          set_has_ip();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_port;
        break;
      }

      // required uint32 port = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_game_service_id;
        break;
      }

      // optional uint32 game_service_id = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_game_service_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &game_service_id_)));
          set_has_game_service_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_business_service_id;
        break;
      }

      // optional uint32 business_service_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_business_service_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &business_service_id_)));
          set_has_business_service_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_current_persons;
        break;
      }

      // required uint32 current_persons = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_current_persons:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &current_persons_)));
          set_has_current_persons();
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

void LoginServerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 ip = 1;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ip(), output);
  }

  // required uint32 port = 2;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->port(), output);
  }

  // optional uint32 game_service_id = 3;
  if (has_game_service_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->game_service_id(), output);
  }

  // optional uint32 business_service_id = 4;
  if (has_business_service_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->business_service_id(), output);
  }

  // required uint32 current_persons = 5;
  if (has_current_persons()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->current_persons(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginServerInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 ip = 1;
  if (has_ip()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ip(), target);
  }

  // required uint32 port = 2;
  if (has_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->port(), target);
  }

  // optional uint32 game_service_id = 3;
  if (has_game_service_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->game_service_id(), target);
  }

  // optional uint32 business_service_id = 4;
  if (has_business_service_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->business_service_id(), target);
  }

  // required uint32 current_persons = 5;
  if (has_current_persons()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->current_persons(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginServerInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 ip = 1;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ip());
    }

    // required uint32 port = 2;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->port());
    }

    // optional uint32 game_service_id = 3;
    if (has_game_service_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->game_service_id());
    }

    // optional uint32 business_service_id = 4;
    if (has_business_service_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->business_service_id());
    }

    // required uint32 current_persons = 5;
    if (has_current_persons()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->current_persons());
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

void LoginServerInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginServerInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginServerInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginServerInfo::MergeFrom(const LoginServerInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_game_service_id()) {
      set_game_service_id(from.game_service_id());
    }
    if (from.has_business_service_id()) {
      set_business_service_id(from.business_service_id());
    }
    if (from.has_current_persons()) {
      set_current_persons(from.current_persons());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginServerInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginServerInfo::CopyFrom(const LoginServerInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginServerInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000013) != 0x00000013) return false;

  return true;
}

void LoginServerInfo::Swap(LoginServerInfo* other) {
  if (other != this) {
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(game_service_id_, other->game_service_id_);
    std::swap(business_service_id_, other->business_service_id_);
    std::swap(current_persons_, other->current_persons_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginServerInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginServerInfo_descriptor_;
  metadata.reflection = LoginServerInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClientGetLoginListRsp::kLoginInfoListFieldNumber;
#endif  // !_MSC_VER

ClientGetLoginListRsp::ClientGetLoginListRsp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientGetLoginListRsp::InitAsDefaultInstance() {
}

ClientGetLoginListRsp::ClientGetLoginListRsp(const ClientGetLoginListRsp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientGetLoginListRsp::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientGetLoginListRsp::~ClientGetLoginListRsp() {
  SharedDtor();
}

void ClientGetLoginListRsp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ClientGetLoginListRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientGetLoginListRsp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientGetLoginListRsp_descriptor_;
}

const ClientGetLoginListRsp& ClientGetLoginListRsp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  return *default_instance_;
}

ClientGetLoginListRsp* ClientGetLoginListRsp::default_instance_ = NULL;

ClientGetLoginListRsp* ClientGetLoginListRsp::New() const {
  return new ClientGetLoginListRsp;
}

void ClientGetLoginListRsp::Clear() {
  login_info_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientGetLoginListRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .com_protocol.LoginServerInfo login_info_list = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_login_info_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_login_info_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_login_info_list;
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

void ClientGetLoginListRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .com_protocol.LoginServerInfo login_info_list = 1;
  for (int i = 0; i < this->login_info_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->login_info_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientGetLoginListRsp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .com_protocol.LoginServerInfo login_info_list = 1;
  for (int i = 0; i < this->login_info_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->login_info_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientGetLoginListRsp::ByteSize() const {
  int total_size = 0;

  // repeated .com_protocol.LoginServerInfo login_info_list = 1;
  total_size += 1 * this->login_info_list_size();
  for (int i = 0; i < this->login_info_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->login_info_list(i));
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

void ClientGetLoginListRsp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientGetLoginListRsp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientGetLoginListRsp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientGetLoginListRsp::MergeFrom(const ClientGetLoginListRsp& from) {
  GOOGLE_CHECK_NE(&from, this);
  login_info_list_.MergeFrom(from.login_info_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientGetLoginListRsp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientGetLoginListRsp::CopyFrom(const ClientGetLoginListRsp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientGetLoginListRsp::IsInitialized() const {

  for (int i = 0; i < login_info_list_size(); i++) {
    if (!this->login_info_list(i).IsInitialized()) return false;
  }
  return true;
}

void ClientGetLoginListRsp::Swap(ClientGetLoginListRsp* other) {
  if (other != this) {
    login_info_list_.Swap(&other->login_info_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientGetLoginListRsp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientGetLoginListRsp_descriptor_;
  metadata.reflection = ClientGetLoginListRsp_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace com_protocol

// @@protoc_insertion_point(global_scope)
