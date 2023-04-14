addpath(genpath('home/ubuntu/JenkinsTest/src'));
load_system('Jenkins_Brake');
set_param('Jenkins_Brake','LaunchReport','off');
try
	rtwbuild('Jenkins_Brake');
catch
	%warning('Error while building Model1');
% 	exit(1);
end
save_system('Jenkins_Brake');
close_system('Jenkins_Brake');
