/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MailMessageLibrary;

@interface _MFSqliteHandle : NSObject {
    struct sqlite3 { } *db;
    MailMessageLibrary *library;
}

+ (id)handleForDB:(struct sqlite3 { }*)arg1 library:(id)arg2;

- (void)closeConnection;

@end