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


public enum ExdLayout  {
    FULL_SCREEN((short)0),
    HALF_VERTICAL((short)1),
    HALF_HORIZONTAL((short)2),
    HALF_VERTICAL_RIGHT_SPLIT((short)3),
    HALF_HORIZONTAL_BOTTOM_SPLIT((short)4),
    FULL_QUARTER_SPLIT((short)5),
    HALF_VERTICAL_LEFT_SPLIT((short)6),
    HALF_HORIZONTAL_TOP_SPLIT((short)7),
    DYNAMIC((short)8),
    INVALID((short)255);

    protected short value;

    private ExdLayout(short value) {
        this.value = value;
    }

    public static ExdLayout getByValue(final Short value) {
        for (final ExdLayout type : ExdLayout.values()) {
            if (value == type.value)
                return type;
        }

        return ExdLayout.INVALID;
    }

    /**
     * Retrieves the String Representation of the Value
     * @param value The enum constant
     * @return The name of this enum constant
     */
    public static String getStringFromValue( ExdLayout value ) {
        return value.name();
    }

    public short getValue() {
        return value;
    }


}
