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

@interface FITSplitSummaryMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// SplitType 
- (BOOL)isSplitTypeValid;
- (FITSplitType)getSplitType;
- (void)setSplitType:(FITSplitType)splitType;
// NumSplits 
- (BOOL)isNumSplitsValid;
- (FITUInt16)getNumSplits;
- (void)setNumSplits:(FITUInt16)numSplits;
// TotalTimerTime 
- (BOOL)isTotalTimerTimeValid;
- (FITFloat32)getTotalTimerTime;
- (void)setTotalTimerTime:(FITFloat32)totalTimerTime;
// TotalDistance 
- (BOOL)isTotalDistanceValid;
- (FITFloat32)getTotalDistance;
- (void)setTotalDistance:(FITFloat32)totalDistance;
// AvgSpeed 
- (BOOL)isAvgSpeedValid;
- (FITFloat32)getAvgSpeed;
- (void)setAvgSpeed:(FITFloat32)avgSpeed;
// MaxSpeed 
- (BOOL)isMaxSpeedValid;
- (FITFloat32)getMaxSpeed;
- (void)setMaxSpeed:(FITFloat32)maxSpeed;
// TotalAscent 
- (BOOL)isTotalAscentValid;
- (FITUInt16)getTotalAscent;
- (void)setTotalAscent:(FITUInt16)totalAscent;
// TotalDescent 
- (BOOL)isTotalDescentValid;
- (FITUInt16)getTotalDescent;
- (void)setTotalDescent:(FITUInt16)totalDescent;
// AvgHeartRate 
- (BOOL)isAvgHeartRateValid;
- (FITUInt8)getAvgHeartRate;
- (void)setAvgHeartRate:(FITUInt8)avgHeartRate;
// MaxHeartRate 
- (BOOL)isMaxHeartRateValid;
- (FITUInt8)getMaxHeartRate;
- (void)setMaxHeartRate:(FITUInt8)maxHeartRate;
// AvgVertSpeed 
- (BOOL)isAvgVertSpeedValid;
- (FITFloat32)getAvgVertSpeed;
- (void)setAvgVertSpeed:(FITFloat32)avgVertSpeed;
// TotalCalories 
- (BOOL)isTotalCaloriesValid;
- (FITUInt32)getTotalCalories;
- (void)setTotalCalories:(FITUInt32)totalCalories;
// TotalMovingTime 
- (BOOL)isTotalMovingTimeValid;
- (FITFloat32)getTotalMovingTime;
- (void)setTotalMovingTime:(FITFloat32)totalMovingTime;

@end

NS_ASSUME_NONNULL_END
