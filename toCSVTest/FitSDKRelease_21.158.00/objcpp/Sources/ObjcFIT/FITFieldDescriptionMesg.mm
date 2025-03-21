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


#import "FITMessage+Internal.h"

#import "FITString.h"

#import "FITFieldDescriptionMesg.h"

@implementation FITFieldDescriptionMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_FIELD_DESCRIPTION];

    return self;
}

// DeveloperDataIndex 
- (BOOL)isDeveloperDataIndexValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getDeveloperDataIndex {
    return ([super getFieldUINT8ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setDeveloperDataIndex:(FITUInt8)developerDataIndex {
    [super setFieldUINT8ValueForField:0 andValue:(developerDataIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FieldDefinitionNumber 
- (BOOL)isFieldDefinitionNumberValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getFieldDefinitionNumber {
    return ([super getFieldUINT8ValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFieldDefinitionNumber:(FITUInt8)fieldDefinitionNumber {
    [super setFieldUINT8ValueForField:1 andValue:(fieldDefinitionNumber) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FitBaseTypeId 
- (BOOL)isFitBaseTypeIdValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFitBaseType)getFitBaseTypeId {
    return ([super getFieldUINT8ValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFitBaseTypeId:(FITFitBaseType)fitBaseTypeId {
    [super setFieldUINT8ValueForField:2 andValue:(fitBaseTypeId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FieldName 
- (uint8_t)numFieldNameValues {
    return [super getFieldNumValuesForField:3 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isFieldNameValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getFieldNameforIndex:(uint8_t)index {
    return ([super getFieldSTRINGValueForField:3 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFieldName:(NSString *)fieldName forIndex:(uint8_t)index {
    [super setFieldSTRINGValueForField:3 andValue:(fieldName) forIndex:index];
} 

// Array 
- (BOOL)isArrayValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getArray {
    return ([super getFieldUINT8ValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setArray:(FITUInt8)array {
    [super setFieldUINT8ValueForField:4 andValue:(array) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Components 
- (BOOL)isComponentsValid {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getComponents {
    return ([super getFieldSTRINGValueForField:5 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setComponents:(NSString *)components {
    [super setFieldSTRINGValueForField:5 andValue:(components) forIndex:0];
} 

// Scale 
- (BOOL)isScaleValid {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getScale {
    return ([super getFieldUINT8ValueForField:6 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setScale:(FITUInt8)scale {
    [super setFieldUINT8ValueForField:6 andValue:(scale) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Offset 
- (BOOL)isOffsetValid {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSInt8)getOffset {
    return ([super getFieldSINT8ValueForField:7 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setOffset:(FITSInt8)offset {
    [super setFieldSINT8ValueForField:7 andValue:(offset) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Units 
- (uint8_t)numUnitsValues {
    return [super getFieldNumValuesForField:8 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isUnitsValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:8];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getUnitsforIndex:(uint8_t)index {
    return ([super getFieldSTRINGValueForField:8 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setUnits:(NSString *)units forIndex:(uint8_t)index {
    [super setFieldSTRINGValueForField:8 andValue:(units) forIndex:index];
} 

// Bits 
- (BOOL)isBitsValid {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getBits {
    return ([super getFieldSTRINGValueForField:9 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setBits:(NSString *)bits {
    [super setFieldSTRINGValueForField:9 andValue:(bits) forIndex:0];
} 

// Accumulate 
- (BOOL)isAccumulateValid {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getAccumulate {
    return ([super getFieldSTRINGValueForField:10 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setAccumulate:(NSString *)accumulate {
    [super setFieldSTRINGValueForField:10 andValue:(accumulate) forIndex:0];
} 

// FitBaseUnitId 
- (BOOL)isFitBaseUnitIdValid {
	const fit::Field* field = [super getField:13];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFitBaseUnit)getFitBaseUnitId {
    return ([super getFieldUINT16ValueForField:13 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFitBaseUnitId:(FITFitBaseUnit)fitBaseUnitId {
    [super setFieldUINT16ValueForField:13 andValue:(fitBaseUnitId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// NativeMesgNum 
- (BOOL)isNativeMesgNumValid {
	const fit::Field* field = [super getField:14];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMesgNum)getNativeMesgNum {
    return ([super getFieldUINT16ValueForField:14 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setNativeMesgNum:(FITMesgNum)nativeMesgNum {
    [super setFieldUINT16ValueForField:14 andValue:(nativeMesgNum) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// NativeFieldNum 
- (BOOL)isNativeFieldNumValid {
	const fit::Field* field = [super getField:15];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getNativeFieldNum {
    return ([super getFieldUINT8ValueForField:15 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setNativeFieldNum:(FITUInt8)nativeFieldNum {
    [super setFieldUINT8ValueForField:15 andValue:(nativeFieldNum) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
