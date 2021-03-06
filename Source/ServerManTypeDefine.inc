{ ****************************************************************************** }
{ * https://github.com/PassByYou888/CoreCipher                                 * }
{ * https://github.com/PassByYou888/ZServer4D                                  * }
{ * https://github.com/PassByYou888/zExpression                                * }
{ ****************************************************************************** }
// define global service type
type
  TServerType = (stUnknow,
    stManager,      // Infinite deploy
    stDatabase,     // only limitations deploy
    stDataStore,    // only limitations deploy
    stFileStore,    // Infinite deploy
    stLogic,        // Infinite deploy
    stPayment,      // Infinite deploy
    stPaymentQuery, // Infinite deploy
    stFOGCompute,   // Infinite deploy
    stLog           // Infinite deploy
    );
  TServerTypes = set of TServerType;

const
  climitationsServerType: TServerTypes = [stDatabase, stDataStore];

