/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface YahooAccount : IMAPAccount {
    NSRecursiveLock *_cookieLock;
    NSMutableDictionary *_incorrectPasswordAttemptDates;
    NSString *_signature;
    NSString *_temporaryPassword;
    double _timeLastEncounteredAuthenticationError;
}

+ (id)_credentialKeysForCookieNames;
+ (id)accountTypeIdentifier;
+ (id)allCookieNames;
+ (id)credentialKeyForCookieName:(id)arg1;
+ (id)deliveryAccountHostname;
+ (unsigned int)deliveryAccountPortNumber;
+ (bool)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)emailAddressWithUsername:(id)arg1;
+ (bool)getConfigurationFromServerForEmail:(id)arg1;
+ (id)hostname;
+ (bool)isPredefinedAccountType;
+ (bool)isSSLEditable;
+ (id)newAccountWithDictionary:(id)arg1;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (bool)usernameIsEmailAddress;
+ (bool)usesSSL;

- (id)URLForMessage:(id)arg1;
- (id)XYMPKISignature;
- (int)_ParsePWTokenResponse:(id)arg1 error:(id*)arg2;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (id)_fetchCookieForKey:(id)arg1 usingToken:(id)arg2 error:(id*)arg3;
- (id)_fetchSecurityToken:(id)arg1 error:(id*)arg2;
- (id)_securityToken:(id*)arg1;
- (id)_securityToken;
- (void)_setSecurityToken:(id)arg1;
- (bool)_shouldAttemptToFetchSecurityTokenWithPassword:(id)arg1;
- (id)_yahooParameterForKey:(id)arg1;
- (Class)connectionClass;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;
- (id)cookieForKey:(id)arg1 error:(id*)arg2;
- (id)cookieForKey:(id)arg1;
- (void)cookiesExpired;
- (unsigned long long)credentialAccessibility;
- (void)dealloc;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayUsername;
- (id)emailAddresses;
- (bool)fetchTokensIfNecessary:(id*)arg1;
- (id)hostname;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (unsigned long long)minUID;
- (id)password;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (void)removeCookie:(id)arg1;
- (id)saveSentFolder;
- (void)setCookie:(id)arg1 forKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setXYMPKISignature:(id)arg1;
- (bool)shouldDisplayHostnameInErrorMessages;
- (id)statisticsKind;
- (id)transferDisabledMailboxUids;

@end
