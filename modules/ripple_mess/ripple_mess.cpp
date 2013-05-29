//------------------------------------------------------------------------------
/*
	Copyright (c) 2011-2013, OpenCoin, Inc.

	Permission to use, copy, modify, and/or distribute this software for any
	purpose with  or without fee is hereby granted,  provided that the above
	copyright notice and this permission notice appear in all copies.

	THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
	WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES OF
	MERCHANTABILITY  AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
	ANY SPECIAL,  DIRECT, INDIRECT,  OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
	WHATSOEVER  RESULTING  FROM LOSS OF USE, DATA OR PROFITS,  WHETHER IN AN
	ACTION OF CONTRACT, NEGLIGENCE  OR OTHER TORTIOUS ACTION, ARISING OUT OF
	OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

/**	Add this to get the @ref ripple_mess module.

    @file ripple_mess.cpp
    @ingroup ripple_mess
*/

#include "ripple_mess.h"

#include "../ripple_data/ripple_data.h"

static const uint64 tenTo14 = 100000000000000ull;
static const uint64 tenTo14m1 = tenTo14 - 1;
static const uint64 tenTo17 = tenTo14 * 1000;
static const uint64 tenTo17m1 = tenTo17 - 1;

// VFALCO: TODO, fix these warnings!
#ifdef _MSC_VER
//#pragma warning (push) // Causes spurious C4503 "decorated name exceeds maximum length"
#pragma warning (disable: 4018) // signed/unsigned mismatch
#pragma warning (disable: 4244) // conversion, possible loss of data
#endif

#include "src/cpp/ripple/Amount.cpp"
#include "src/cpp/ripple/AmountRound.cpp"
#include "src/cpp/ripple/DeterministicKeys.cpp"
#include "src/cpp/ripple/HashedObject.cpp"
#include "src/cpp/ripple/PackedMessage.cpp" // no log
#include "src/cpp/ripple/ParameterTable.cpp" // no log
#include "src/cpp/ripple/ParseSection.cpp"
#include "src/cpp/ripple/ProofOfWork.cpp"
#include "src/cpp/ripple/SHAMap.cpp"
#include "src/cpp/ripple/SHAMapDiff.cpp" // no log
#include "src/cpp/ripple/SHAMapNodes.cpp" // no log
#include "src/cpp/ripple/SHAMapSync.cpp"

// VFALCO: TODO Fix this for SConstruct
#ifdef _MSC_VER
#include "ripple.pb.cc" // BROKEN because of SConstruct
#endif

#ifdef _MSC_VER
//#pragma warning (pop)
#endif