/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.158.0Release
// Tag = production/release/21.158.0-0-gc9428aa
/////////////////////////////////////////////////////////////////////////////////////////////


#include <cmath>
#include <sstream>
#include "fit_field.hpp"
#include "fit_mesg.hpp"
#include "fit_unicode.hpp"

namespace fit
{

Field::Field(void)
    : FieldBase()
    , profile(NULL)
    , type(FIT_UINT8_INVALID)
    , isFieldExpanded(FIT_FALSE)
{
}

Field::Field(const Field &field)
    : FieldBase(field)
    , profile(field.profile)
    , profileIndex(field.profileIndex)
    , type(field.type)
    , isFieldExpanded(field.isFieldExpanded)
{
}

Field::Field(const Profile::MESG_INDEX mesgIndex, const FIT_UINT16 fieldIndex)
    : FieldBase()
    , profile(&Profile::mesgs[mesgIndex])
    , profileIndex(fieldIndex)
    , type(FIT_UINT8_INVALID)
    , isFieldExpanded(FIT_FALSE)
{
}

Field::Field(const FIT_UINT16 mesgNum, const FIT_UINT8 fieldNum)
    : FieldBase()
    , profile(Profile::GetMesg(mesgNum))
    , profileIndex(Profile::GetFieldIndex(mesgNum, fieldNum))
    , type(FIT_UINT8_INVALID)
    , isFieldExpanded(FIT_FALSE)
{
}

Field::Field(const std::string& mesgName, const std::string& fieldName)
    : FieldBase()
    , profile(Profile::GetMesg(mesgName))
    , profileIndex(Profile::GetFieldIndex(mesgName, fieldName))
    , type(FIT_UINT8_INVALID)
    , isFieldExpanded(FIT_FALSE)
{
}

void Field::SetBaseType( FIT_UINT8 type )
{
    this->type = type;
}

FIT_BOOL Field::IsValid(void) const
{
    return profileIndex != FIT_UINT16_INVALID;
}

FIT_BOOL Field::GetIsAccumulated() const
{
    return profile->fields[profileIndex].isAccumulated;
}

FIT_UINT16 Field::GetIndex(void) const
{
    return profileIndex;
}

std::string Field::GetName() const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return "unknown";
    return profile->fields[profileIndex].name;
}

FIT_UINT8 Field::GetNum(void) const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return FIT_FIELD_NUM_INVALID;
    return profile->fields[profileIndex].num;
}

FIT_UINT8 Field::GetType() const
{
    if ( type != FIT_UINT8_INVALID )
        return type;

    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return FIT_UINT8_INVALID;

    return profile->fields[profileIndex].type;
}

std::string Field::GetUnits() const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return "";
    return profile->fields[profileIndex].units;
}

FIT_FLOAT64 Field::GetScale() const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return 1;
    return profile->fields[profileIndex].scale;
}

FIT_FLOAT64 Field::GetOffset() const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return 0;
    return profile->fields[profileIndex].offset;
}

FIT_UINT16 Field::GetNumComponents(void) const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return 0;
    return profile->fields[profileIndex].numComponents;
}

FIT_UINT16 Field::GetNumSubFields(void) const
{
    if ((profile == NULL) || (profileIndex >= profile->numFields))
        return 0;
    return profile->fields[profileIndex].numSubFields;
}

FIT_BOOL Field::GetIsExpanded(void) const
{
    return isFieldExpanded;
}

void Field::SetIsExpanded(FIT_BOOL newValue)
{
    isFieldExpanded = newValue;
}

const Profile::FIELD_COMPONENT* Field::GetComponent(const FIT_UINT16 component) const
{
    if (component >= GetNumComponents())
        return NULL;
    return &profile->fields[profileIndex].components[component];
}

const Profile::SUBFIELD* Field::GetSubField(const FIT_UINT16 subFieldIndex) const
{
    if (subFieldIndex >= GetNumSubFields())
        return NULL;
    return &profile->fields[profileIndex].subFields[subFieldIndex];
}
} // namespace fit
