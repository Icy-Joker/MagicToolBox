#pragma once

#ifndef XMLVISUALEDITORPRIVATE_H
# define XMLVISUALEDITORPRIVATE_H

#include <pugixml.hpp>

struct XmlVisualEditorPrivate
{
  pugi::xml_document xml_document;
};

#endif//!XMLVISUALEDITORPRIVATE_H
