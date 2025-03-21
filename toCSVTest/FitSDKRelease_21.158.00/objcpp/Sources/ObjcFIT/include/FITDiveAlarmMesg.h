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


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITDiveAlarmMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Depth 
- (BOOL)isDepthValid;
- (FITFloat32)getDepth;
- (void)setDepth:(FITFloat32)depth;
// Time 
- (BOOL)isTimeValid;
- (FITSInt32)getTime;
- (void)setTime:(FITSInt32)time;
// Enabled 
- (BOOL)isEnabledValid;
- (FITBool)getEnabled;
- (void)setEnabled:(FITBool)enabled;
// AlarmType 
- (BOOL)isAlarmTypeValid;
- (FITDiveAlarmType)getAlarmType;
- (void)setAlarmType:(FITDiveAlarmType)alarmType;
// Sound 
- (BOOL)isSoundValid;
- (FITTone)getSound;
- (void)setSound:(FITTone)sound;
// DiveTypes 
@property(readonly,nonatomic) uint8_t numDiveTypesValues;
- (BOOL)isDiveTypesValidforIndex : (uint8_t)index;
- (FITSubSport)getDiveTypesforIndex : (uint8_t)index;
- (void)setDiveTypes:(FITSubSport)diveTypes forIndex:(uint8_t)index;
// Id 
- (BOOL)isIdValid;
- (FITUInt32)getId;
- (void)setId:(FITUInt32)id;
// PopupEnabled 
- (BOOL)isPopupEnabledValid;
- (FITBool)getPopupEnabled;
- (void)setPopupEnabled:(FITBool)popupEnabled;
// TriggerOnDescent 
- (BOOL)isTriggerOnDescentValid;
- (FITBool)getTriggerOnDescent;
- (void)setTriggerOnDescent:(FITBool)triggerOnDescent;
// TriggerOnAscent 
- (BOOL)isTriggerOnAscentValid;
- (FITBool)getTriggerOnAscent;
- (void)setTriggerOnAscent:(FITBool)triggerOnAscent;
// Repeating 
- (BOOL)isRepeatingValid;
- (FITBool)getRepeating;
- (void)setRepeating:(FITBool)repeating;
// Speed 
- (BOOL)isSpeedValid;
- (FITFloat32)getSpeed;
- (void)setSpeed:(FITFloat32)speed;

@end

NS_ASSUME_NONNULL_END
