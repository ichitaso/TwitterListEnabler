//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TSPKeyValueStore, TSPKeyValueStoreProvider;

@interface TSPPersistenceManager : NSObject
{
    id <TSPKeyValueStore> _trustedIdentityStore;
    id <TSPKeyValueStore> _identityKeyStore;
    id <TSPKeyValueStore> _preKeyStore;
    id <TSPKeyValueStore> _signedPreKeyStore;
    id <TSPKeyValueStore> _sessionStore;
    id <TSPKeyValueStore> _metadataStore;
    id <TSPKeyValueStore> _registrationDataStore;
    id <TSPKeyValueStoreProvider> _messageStoreProvider;
}

+ (_Bool)removeAllPersistedDataForNamespace:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) id <TSPKeyValueStoreProvider> messageStoreProvider; // @synthesize messageStoreProvider=_messageStoreProvider;
@property(readonly, nonatomic) id <TSPKeyValueStore> registrationDataStore; // @synthesize registrationDataStore=_registrationDataStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> metadataStore; // @synthesize metadataStore=_metadataStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> sessionStore; // @synthesize sessionStore=_sessionStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> signedPreKeyStore; // @synthesize signedPreKeyStore=_signedPreKeyStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> preKeyStore; // @synthesize preKeyStore=_preKeyStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> identityKeyStore; // @synthesize identityKeyStore=_identityKeyStore;
@property(readonly, nonatomic) id <TSPKeyValueStore> trustedIdentityStore; // @synthesize trustedIdentityStore=_trustedIdentityStore;
- (void).cxx_destruct;
- (_Bool)removeAllMessageDataWithError:(out id *)arg1;
- (_Bool)removeAllMessageDataWithConversationID:(id)arg1 error:(out id *)arg2;
- (_Bool)removeMessageDataWithMessageID:(long long)arg1 conversationID:(id)arg2 error:(out id *)arg3;
- (_Bool)containsMessageDataWithMessageID:(long long)arg1 conversationID:(id)arg2 result:(out _Bool *)arg3 error:(out id *)arg4;
- (_Bool)storeMessageData:(id)arg1 withMessageID:(long long)arg2 conversationID:(id)arg3 error:(out id *)arg4;
- (_Bool)loadMessageData:(out id *)arg1 withMessageID:(long long)arg2 conversationID:(id)arg3 error:(out id *)arg4;
- (void)removeAllSessions;
- (_Bool)removeSessionForAddress:(id)arg1 error:(out id *)arg2;
- (_Bool)containsSessionForAddress:(id)arg1 result:(out _Bool *)arg2 error:(out id *)arg3;
- (_Bool)storeSession:(id)arg1 forAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)loadSession:(out id *)arg1 forAddress:(id)arg2 error:(out id *)arg3;
- (void)removeAllIdentityKeys;
- (_Bool)removeIdentityKeyForAddress:(id)arg1 error:(out id *)arg2;
- (_Bool)containsIdentityKeyForAddress:(id)arg1 result:(out _Bool *)arg2 error:(out id *)arg3;
- (_Bool)storeIdentityKey:(id)arg1 forAddress:(id)arg2 error:(out id *)arg3;
- (_Bool)loadIdentityKey:(out id *)arg1 forAddress:(id)arg2 error:(out id *)arg3;
- (id)signedPreKeyLastUpdated;
- (_Bool)reserveSignedPreKeyID:(out unsigned int *)arg1 error:(out id *)arg2;
- (_Bool)removeAllSignedPreKeysWithError:(out id *)arg1;
- (_Bool)removeSignedPreKeyForID:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)containsSignedPreKeyForID:(unsigned int)arg1 result:(_Bool *)arg2 error:(out id *)arg3;
- (_Bool)storeSignedPreKey:(id)arg1 forID:(unsigned int)arg2 error:(out id *)arg3;
- (_Bool)loadSignedPreKey:(id *)arg1 forID:(unsigned int)arg2 error:(out id *)arg3;
- (_Bool)reservePreKeyIDsWithCount:(unsigned long long)arg1 startingID:(out unsigned int *)arg2 error:(out id *)arg3;
- (_Bool)removeAllPreKeysWithError:(out id *)arg1;
- (_Bool)removePreKeyForID:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)containsPreKeyForID:(unsigned int)arg1 result:(_Bool *)arg2 error:(out id *)arg3;
- (_Bool)storePreKey:(id)arg1 forID:(unsigned int)arg2 error:(out id *)arg3;
- (_Bool)loadPreKey:(id *)arg1 forID:(unsigned int)arg2 error:(out id *)arg3;
- (_Bool)removeAllTrustedIdentities;
- (_Bool)storeTrustedDeviceID:(id)arg1 identityKey:(id)arg2 forConversationID:(id)arg3 error:(out id *)arg4;
- (_Bool)loadTrustedDeviceID:(out id *)arg1 identityKey:(out id *)arg2 forConversationID:(id)arg3 error:(id *)arg4;
- (_Bool)setRegistrationID:(id)arg1 error:(id *)arg2;
- (_Bool)loadRegistrationID:(out id *)arg1 error:(id *)arg2;
- (_Bool)setIdentityKey:(id)arg1 error:(id *)arg2;
- (_Bool)loadIdentityKey:(out id *)arg1 error:(id *)arg2;
- (id)initWithNamespace:(id)arg1;
- (id)initWithMetadataStore:(id)arg1 registrationDataStore:(id)arg2 trustedIdentityStore:(id)arg3 identityKeyStore:(id)arg4 preKeyStore:(id)arg5 signedPreKeyStore:(id)arg6 sessionStore:(id)arg7 messageStoreProvider:(id)arg8;
- (id)init;

@end

