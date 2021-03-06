// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: image.capnp

#ifndef CAPNP_INCLUDED_b6221a35dd738553_
#define CAPNP_INCLUDED_b6221a35dd738553_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(fc2e212254bfa8d0);
CAPNP_DECLARE_SCHEMA(d5c914c3bb0b68f1);
CAPNP_DECLARE_SCHEMA(f59f6a8579ff1615);
CAPNP_DECLARE_SCHEMA(8a72e064da54350f);
enum class PrimitiveType_8a72e064da54350f: uint16_t {
  LINE,
  CIRCLE,
  BEZIER,
  POINT_CLOUD,
  FILL,
  STROKE,
};
CAPNP_DECLARE_ENUM(PrimitiveType, 8a72e064da54350f);
CAPNP_DECLARE_SCHEMA(92d0dc03e793cd6d);
CAPNP_DECLARE_SCHEMA(8c63969f6ce30c26);
CAPNP_DECLARE_SCHEMA(bcf564b0fc349aad);

}  // namespace schemas
}  // namespace capnp


static constexpr  ::uint32_t QUX = 123u;
struct Image {
  Image() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  struct Command;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d5c914c3bb0b68f1, 1, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Image::Command {
  Command() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  typedef ::capnp::schemas::PrimitiveType_8a72e064da54350f PrimitiveType;

  struct Cmd;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f59f6a8579ff1615, 1, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Image::Command::Cmd {
  Cmd() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  enum Which: uint16_t {
    PRIMITIVE,
    STATE_CHANGE,
  };
  struct Primitive;
  struct StateChange;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(92d0dc03e793cd6d, 1, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Image::Command::Cmd::Primitive {
  Primitive() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(8c63969f6ce30c26, 1, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct Image::Command::Cmd::StateChange {
  StateChange() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(bcf564b0fc349aad, 1, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Image::Reader {
public:
  typedef Image Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getId() const;

  inline bool hasShortname() const;
  inline  ::capnp::Text::Reader getShortname() const;

  inline  ::uint32_t getTimestamp() const;

  inline bool hasCommands() const;
  inline  ::capnp::List< ::Image::Command>::Reader getCommands() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Image::Builder {
public:
  typedef Image Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getId();
  inline void setId( ::uint32_t value);

  inline bool hasShortname();
  inline  ::capnp::Text::Builder getShortname();
  inline void setShortname( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initShortname(unsigned int size);
  inline void adoptShortname(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownShortname();

  inline  ::uint32_t getTimestamp();
  inline void setTimestamp( ::uint32_t value);

  inline bool hasCommands();
  inline  ::capnp::List< ::Image::Command>::Builder getCommands();
  inline void setCommands( ::capnp::List< ::Image::Command>::Reader value);
  inline  ::capnp::List< ::Image::Command>::Builder initCommands(unsigned int size);
  inline void adoptCommands(::capnp::Orphan< ::capnp::List< ::Image::Command>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::Image::Command>> disownCommands();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Image::Pipeline {
public:
  typedef Image Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Image::Command::Reader {
public:
  typedef Command Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline typename Cmd::Reader getCmd() const;

  inline bool hasValues() const;
  inline  ::capnp::List<float>::Reader getValues() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Image::Command::Builder {
public:
  typedef Command Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline typename Cmd::Builder getCmd();
  inline typename Cmd::Builder initCmd();

  inline bool hasValues();
  inline  ::capnp::List<float>::Builder getValues();
  inline void setValues( ::capnp::List<float>::Reader value);
  inline void setValues(::kj::ArrayPtr<const float> value);
  inline  ::capnp::List<float>::Builder initValues(unsigned int size);
  inline void adoptValues(::capnp::Orphan< ::capnp::List<float>>&& value);
  inline ::capnp::Orphan< ::capnp::List<float>> disownValues();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Image::Command::Pipeline {
public:
  typedef Command Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline typename Cmd::Pipeline getCmd();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Image::Command::Cmd::Reader {
public:
  typedef Cmd Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline Which which() const;
  inline bool isPrimitive() const;
  inline typename Primitive::Reader getPrimitive() const;

  inline bool isStateChange() const;
  inline typename StateChange::Reader getStateChange() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Image::Command::Cmd::Builder {
public:
  typedef Cmd Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline Which which();
  inline bool isPrimitive();
  inline typename Primitive::Builder getPrimitive();
  inline typename Primitive::Builder initPrimitive();

  inline bool isStateChange();
  inline typename StateChange::Builder getStateChange();
  inline typename StateChange::Builder initStateChange();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Image::Command::Cmd::Pipeline {
public:
  typedef Cmd Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Image::Command::Cmd::Primitive::Reader {
public:
  typedef Primitive Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::Image::Command::PrimitiveType getType() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Image::Command::Cmd::Primitive::Builder {
public:
  typedef Primitive Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::Image::Command::PrimitiveType getType();
  inline void setType( ::Image::Command::PrimitiveType value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Image::Command::Cmd::Primitive::Pipeline {
public:
  typedef Primitive Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class Image::Command::Cmd::StateChange::Reader {
public:
  typedef StateChange Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasKey() const;
  inline  ::capnp::Text::Reader getKey() const;

  inline bool hasValue() const;
  inline  ::capnp::Text::Reader getValue() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Image::Command::Cmd::StateChange::Builder {
public:
  typedef StateChange Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasKey();
  inline  ::capnp::Text::Builder getKey();
  inline void setKey( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initKey(unsigned int size);
  inline void adoptKey(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownKey();

  inline bool hasValue();
  inline  ::capnp::Text::Builder getValue();
  inline void setValue( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initValue(unsigned int size);
  inline void adoptValue(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownValue();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Image::Command::Cmd::StateChange::Pipeline {
public:
  typedef StateChange Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint32_t Image::Reader::getId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Image::Builder::getId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Image::Builder::setId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Image::Reader::hasShortname() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Image::Builder::hasShortname() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Image::Reader::getShortname() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Image::Builder::getShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Image::Builder::setShortname( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Image::Builder::initShortname(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Image::Builder::adoptShortname(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Image::Builder::disownShortname() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint32_t Image::Reader::getTimestamp() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Image::Builder::getTimestamp() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Image::Builder::setTimestamp( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline bool Image::Reader::hasCommands() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Image::Builder::hasCommands() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::Image::Command>::Reader Image::Reader::getCommands() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::Image::Command>::Builder Image::Builder::getCommands() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Image::Builder::setCommands( ::capnp::List< ::Image::Command>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::Image::Command>::Builder Image::Builder::initCommands(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Image::Builder::adoptCommands(
    ::capnp::Orphan< ::capnp::List< ::Image::Command>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::Image::Command>> Image::Builder::disownCommands() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::Image::Command>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline typename Image::Command::Cmd::Reader Image::Command::Reader::getCmd() const {
  return typename Image::Command::Cmd::Reader(_reader);
}
inline typename Image::Command::Cmd::Builder Image::Command::Builder::getCmd() {
  return typename Image::Command::Cmd::Builder(_builder);
}
#if !CAPNP_LITE
inline typename Image::Command::Cmd::Pipeline Image::Command::Pipeline::getCmd() {
  return typename Image::Command::Cmd::Pipeline(_typeless.noop());
}
#endif  // !CAPNP_LITE
inline typename Image::Command::Cmd::Builder Image::Command::Builder::initCmd() {
  _builder.setDataField< ::uint16_t>(::capnp::bounded<0>() * ::capnp::ELEMENTS, 0);
  _builder.setDataField< ::uint16_t>(::capnp::bounded<1>() * ::capnp::ELEMENTS, 0);
  _builder.getPointerField(::capnp::bounded<0>() * ::capnp::POINTERS).clear();
  _builder.getPointerField(::capnp::bounded<1>() * ::capnp::POINTERS).clear();
  return typename Image::Command::Cmd::Builder(_builder);
}
inline bool Image::Command::Reader::hasValues() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Image::Command::Builder::hasValues() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List<float>::Reader Image::Command::Reader::getValues() const {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List<float>::Builder Image::Command::Builder::getValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Image::Command::Builder::setValues( ::capnp::List<float>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline void Image::Command::Builder::setValues(::kj::ArrayPtr<const float> value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List<float>::Builder Image::Command::Builder::initValues(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Image::Command::Builder::adoptValues(
    ::capnp::Orphan< ::capnp::List<float>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List<float>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List<float>> Image::Command::Builder::disownValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List<float>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline  ::Image::Command::Cmd::Which Image::Command::Cmd::Reader::which() const {
  return _reader.getDataField<Which>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline  ::Image::Command::Cmd::Which Image::Command::Cmd::Builder::which() {
  return _builder.getDataField<Which>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline bool Image::Command::Cmd::Reader::isPrimitive() const {
  return which() == Image::Command::Cmd::PRIMITIVE;
}
inline bool Image::Command::Cmd::Builder::isPrimitive() {
  return which() == Image::Command::Cmd::PRIMITIVE;
}
inline typename Image::Command::Cmd::Primitive::Reader Image::Command::Cmd::Reader::getPrimitive() const {
  KJ_IREQUIRE((which() == Image::Command::Cmd::PRIMITIVE),
              "Must check which() before get()ing a union member.");
  return typename Image::Command::Cmd::Primitive::Reader(_reader);
}
inline typename Image::Command::Cmd::Primitive::Builder Image::Command::Cmd::Builder::getPrimitive() {
  KJ_IREQUIRE((which() == Image::Command::Cmd::PRIMITIVE),
              "Must check which() before get()ing a union member.");
  return typename Image::Command::Cmd::Primitive::Builder(_builder);
}
inline typename Image::Command::Cmd::Primitive::Builder Image::Command::Cmd::Builder::initPrimitive() {
  _builder.setDataField<Image::Command::Cmd::Which>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, Image::Command::Cmd::PRIMITIVE);
  _builder.setDataField< ::uint16_t>(::capnp::bounded<0>() * ::capnp::ELEMENTS, 0);
  return typename Image::Command::Cmd::Primitive::Builder(_builder);
}
inline bool Image::Command::Cmd::Reader::isStateChange() const {
  return which() == Image::Command::Cmd::STATE_CHANGE;
}
inline bool Image::Command::Cmd::Builder::isStateChange() {
  return which() == Image::Command::Cmd::STATE_CHANGE;
}
inline typename Image::Command::Cmd::StateChange::Reader Image::Command::Cmd::Reader::getStateChange() const {
  KJ_IREQUIRE((which() == Image::Command::Cmd::STATE_CHANGE),
              "Must check which() before get()ing a union member.");
  return typename Image::Command::Cmd::StateChange::Reader(_reader);
}
inline typename Image::Command::Cmd::StateChange::Builder Image::Command::Cmd::Builder::getStateChange() {
  KJ_IREQUIRE((which() == Image::Command::Cmd::STATE_CHANGE),
              "Must check which() before get()ing a union member.");
  return typename Image::Command::Cmd::StateChange::Builder(_builder);
}
inline typename Image::Command::Cmd::StateChange::Builder Image::Command::Cmd::Builder::initStateChange() {
  _builder.setDataField<Image::Command::Cmd::Which>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, Image::Command::Cmd::STATE_CHANGE);
  _builder.getPointerField(::capnp::bounded<0>() * ::capnp::POINTERS).clear();
  _builder.getPointerField(::capnp::bounded<1>() * ::capnp::POINTERS).clear();
  return typename Image::Command::Cmd::StateChange::Builder(_builder);
}
inline  ::Image::Command::PrimitiveType Image::Command::Cmd::Primitive::Reader::getType() const {
  return _reader.getDataField< ::Image::Command::PrimitiveType>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::Image::Command::PrimitiveType Image::Command::Cmd::Primitive::Builder::getType() {
  return _builder.getDataField< ::Image::Command::PrimitiveType>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Image::Command::Cmd::Primitive::Builder::setType( ::Image::Command::PrimitiveType value) {
  _builder.setDataField< ::Image::Command::PrimitiveType>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool Image::Command::Cmd::StateChange::Reader::hasKey() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Image::Command::Cmd::StateChange::Builder::hasKey() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Image::Command::Cmd::StateChange::Reader::getKey() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Image::Command::Cmd::StateChange::Builder::getKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Image::Command::Cmd::StateChange::Builder::setKey( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Image::Command::Cmd::StateChange::Builder::initKey(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Image::Command::Cmd::StateChange::Builder::adoptKey(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Image::Command::Cmd::StateChange::Builder::disownKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Image::Command::Cmd::StateChange::Reader::hasValue() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Image::Command::Cmd::StateChange::Builder::hasValue() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Image::Command::Cmd::StateChange::Reader::getValue() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Image::Command::Cmd::StateChange::Builder::getValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Image::Command::Cmd::StateChange::Builder::setValue( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Image::Command::Cmd::StateChange::Builder::initValue(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Image::Command::Cmd::StateChange::Builder::adoptValue(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Image::Command::Cmd::StateChange::Builder::disownValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}


#endif  // CAPNP_INCLUDED_b6221a35dd738553_
