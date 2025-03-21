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


package com.garmin.fit;


public enum RiderPositionType  {
    SEATED((short)0),
    STANDING((short)1),
    TRANSITION_TO_SEATED((short)2),
    TRANSITION_TO_STANDING((short)3),
    INVALID((short)255);

    protected short value;

    private RiderPositionType(short value) {
        this.value = value;
    }

    public static RiderPositionType getByValue(final Short value) {
        for (final RiderPositionType type : RiderPositionType.values()) {
            if (value == type.value)
                return type;
        }

        return RiderPositionType.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( RiderPositionType value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
