class Keyword
{
public:
	int Value1;
	static int Value2; // <- ��������ó�� ��� / ������ ���� ���� ���

	const int Value3 = 10; // �� ������, ���߿� ���� ���� �Ұ��ϹǷ� �ʱ�ȭ �ʿ�

	void Func() const;
	static void SFunc();

	int Get() const; // �Լ� ��ɿ� ������ ���� �����ϴ� ���� ���ٴ� �� �ǹ�,��ɸ� ����

	const int Print(); // �Լ� Ÿ�� �տ� const�� ���ϰ��� ������ �ʴ´ٴ� ��

};