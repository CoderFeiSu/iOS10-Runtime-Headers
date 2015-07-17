/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSharedPredictionService : NSObject {
    NSString * _configFilePath;
    NSObject<OS_dispatch_queue> * _corePredictionQueue;
    NSString * _modelDBFilePath;
    CPMLModel * _predictionModel;
    NSString * _trainingDBFilePath;
    CPMLDB * _trainingModel;
}

@property (retain) NSString *configFilePath;
@property (retain) NSObject<OS_dispatch_queue> *corePredictionQueue;
@property (retain) NSString *modelDBFilePath;
@property (retain) CPMLModel *predictionModel;
@property (retain) NSString *trainingDBFilePath;
@property (retain) CPMLDB *trainingModel;

- (void).cxx_destruct;
- (id)configFilePath;
- (id)corePredictionQueue;
- (id)getConfigFilePath;
- (void)initPredictionModel;
- (id)initWithTrainingDBFilePath:(id)arg1 modelDBFilePath:(id)arg2 className:(id)arg3;
- (id)modelDBFilePath;
- (id)predictionModel;
- (void)purgeAllData;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)setConfigFilePath:(id)arg1;
- (void)setCorePredictionQueue:(id)arg1;
- (void)setModelDBFilePath:(id)arg1;
- (void)setPredictionModel:(id)arg1;
- (void)setTrainingDBFilePath:(id)arg1;
- (void)setTrainingModel:(id)arg1;
- (id)trainingDBFilePath;
- (id)trainingModel;

@end