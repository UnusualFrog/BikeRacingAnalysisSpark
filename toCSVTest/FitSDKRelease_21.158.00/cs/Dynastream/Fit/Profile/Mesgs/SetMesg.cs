#region Copyright
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

#endregion

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.IO;
using System.Linq;

namespace Dynastream.Fit
{
    /// <summary>
    /// Implements the Set profile message.
    /// </summary>
    public class SetMesg : Mesg
    {
        #region Fields
        #endregion

        /// <summary>
        /// Field Numbers for <see cref="SetMesg"/>
        /// </summary>
        public sealed class FieldDefNum
        {
            public const byte Timestamp = 254;
            public const byte Duration = 0;
            public const byte Repetitions = 3;
            public const byte Weight = 4;
            public const byte SetType = 5;
            public const byte StartTime = 6;
            public const byte Category = 7;
            public const byte CategorySubtype = 8;
            public const byte WeightDisplayUnit = 9;
            public const byte MessageIndex = 10;
            public const byte WktStepIndex = 11;
            public const byte Invalid = Fit.FieldNumInvalid;
        }

        #region Constructors
        public SetMesg() : base(Profile.GetMesg(MesgNum.Set))
        {
        }

        public SetMesg(Mesg mesg) : base(mesg)
        {
        }
        #endregion // Constructors

        #region Methods
        ///<summary>
        /// Retrieves the Timestamp field
        /// Comment: Timestamp of the set</summary>
        /// <returns>Returns DateTime representing the Timestamp field</returns>
        public DateTime GetTimestamp()
        {
            Object val = GetFieldValue(254, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set Timestamp field
        /// Comment: Timestamp of the set</summary>
        /// <param name="timestamp_">Nullable field value to be set</param>
        public void SetTimestamp(DateTime timestamp_)
        {
            SetFieldValue(254, 0, timestamp_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Duration field
        /// Units: s</summary>
        /// <returns>Returns nullable float representing the Duration field</returns>
        public float? GetDuration()
        {
            Object val = GetFieldValue(0, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSingle(val));
            
        }

        /// <summary>
        /// Set Duration field
        /// Units: s</summary>
        /// <param name="duration_">Nullable field value to be set</param>
        public void SetDuration(float? duration_)
        {
            SetFieldValue(0, 0, duration_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Repetitions field
        /// Comment: # of repitions of the movement</summary>
        /// <returns>Returns nullable ushort representing the Repetitions field</returns>
        public ushort? GetRepetitions()
        {
            Object val = GetFieldValue(3, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set Repetitions field
        /// Comment: # of repitions of the movement</summary>
        /// <param name="repetitions_">Nullable field value to be set</param>
        public void SetRepetitions(ushort? repetitions_)
        {
            SetFieldValue(3, 0, repetitions_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Weight field
        /// Units: kg
        /// Comment: Amount of weight applied for the set</summary>
        /// <returns>Returns nullable float representing the Weight field</returns>
        public float? GetWeight()
        {
            Object val = GetFieldValue(4, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSingle(val));
            
        }

        /// <summary>
        /// Set Weight field
        /// Units: kg
        /// Comment: Amount of weight applied for the set</summary>
        /// <param name="weight_">Nullable field value to be set</param>
        public void SetWeight(float? weight_)
        {
            SetFieldValue(4, 0, weight_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the SetType field</summary>
        /// <returns>Returns nullable byte representing the SetType field</returns>
        public byte? GetSetType()
        {
            Object val = GetFieldValue(5, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToByte(val));
            
        }

        /// <summary>
        /// Set SetType field</summary>
        /// <param name="setType_">Nullable field value to be set</param>
        public void SetSetType(byte? setType_)
        {
            SetFieldValue(5, 0, setType_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the StartTime field
        /// Comment: Start time of the set</summary>
        /// <returns>Returns DateTime representing the StartTime field</returns>
        public DateTime GetStartTime()
        {
            Object val = GetFieldValue(6, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set StartTime field
        /// Comment: Start time of the set</summary>
        /// <param name="startTime_">Nullable field value to be set</param>
        public void SetStartTime(DateTime startTime_)
        {
            SetFieldValue(6, 0, startTime_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        
        /// <summary>
        ///
        /// </summary>
        /// <returns>returns number of elements in field Category</returns>
        public int GetNumCategory()
        {
            return GetNumFieldValues(7, Fit.SubfieldIndexMainField);
        }

        ///<summary>
        /// Retrieves the Category field</summary>
        /// <param name="index">0 based index of Category element to retrieve</param>
        /// <returns>Returns nullable ushort representing the Category field</returns>
        public ushort? GetCategory(int index)
        {
            Object val = GetFieldValue(7, index, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set Category field</summary>
        /// <param name="index">0 based index of category</param>
        /// <param name="category_">Nullable field value to be set</param>
        public void SetCategory(int index, ushort? category_)
        {
            SetFieldValue(7, index, category_, Fit.SubfieldIndexMainField);
        }
        
        
        /// <summary>
        ///
        /// </summary>
        /// <returns>returns number of elements in field CategorySubtype</returns>
        public int GetNumCategorySubtype()
        {
            return GetNumFieldValues(8, Fit.SubfieldIndexMainField);
        }

        ///<summary>
        /// Retrieves the CategorySubtype field
        /// Comment: Based on the associated category, see [category]_exercise_names</summary>
        /// <param name="index">0 based index of CategorySubtype element to retrieve</param>
        /// <returns>Returns nullable ushort representing the CategorySubtype field</returns>
        public ushort? GetCategorySubtype(int index)
        {
            Object val = GetFieldValue(8, index, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set CategorySubtype field
        /// Comment: Based on the associated category, see [category]_exercise_names</summary>
        /// <param name="index">0 based index of category_subtype</param>
        /// <param name="categorySubtype_">Nullable field value to be set</param>
        public void SetCategorySubtype(int index, ushort? categorySubtype_)
        {
            SetFieldValue(8, index, categorySubtype_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the WeightDisplayUnit field</summary>
        /// <returns>Returns nullable ushort representing the WeightDisplayUnit field</returns>
        public ushort? GetWeightDisplayUnit()
        {
            Object val = GetFieldValue(9, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set WeightDisplayUnit field</summary>
        /// <param name="weightDisplayUnit_">Nullable field value to be set</param>
        public void SetWeightDisplayUnit(ushort? weightDisplayUnit_)
        {
            SetFieldValue(9, 0, weightDisplayUnit_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the MessageIndex field</summary>
        /// <returns>Returns nullable ushort representing the MessageIndex field</returns>
        public ushort? GetMessageIndex()
        {
            Object val = GetFieldValue(10, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set MessageIndex field</summary>
        /// <param name="messageIndex_">Nullable field value to be set</param>
        public void SetMessageIndex(ushort? messageIndex_)
        {
            SetFieldValue(10, 0, messageIndex_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the WktStepIndex field</summary>
        /// <returns>Returns nullable ushort representing the WktStepIndex field</returns>
        public ushort? GetWktStepIndex()
        {
            Object val = GetFieldValue(11, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set WktStepIndex field</summary>
        /// <param name="wktStepIndex_">Nullable field value to be set</param>
        public void SetWktStepIndex(ushort? wktStepIndex_)
        {
            SetFieldValue(11, 0, wktStepIndex_, Fit.SubfieldIndexMainField);
        }
        
        #endregion // Methods
    } // Class
} // namespace
