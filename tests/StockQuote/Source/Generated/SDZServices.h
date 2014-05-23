//
//  SDZServices.h
//
//  Creates a list of the services available with the SDZ prefix.
//  Generated by Sudz-C (https://github.com/jkichline/sudzc)
//

#import "SDZStockQuote.h"

@interface SDZServices : NSObject

- (id)initWithServer:(NSString *)serverName;
- (void)updateService:(SoapService *)service;
- (void)updateServices;
+ (SDZServices *)service;
+ (SDZServices *)serviceWithServer:(NSString *)serverName;

@property (assign, nonatomic) BOOL logging;
@property (strong, nonatomic) NSString *server;
@property (strong, nonatomic) NSString *defaultServer;
@property (strong, nonatomic, readonly) SDZStockQuote *stockQuote;

@end